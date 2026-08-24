// --------------------------------------------------
// THIS CAN BE INSERTED INTO WOKWI ASSUMING THAT THE WIRING FOR THE COMPONENTS WAS CARRIED OUT CORRECTLY
// --------------------------------------------------


#include <Wire.h>
#include <SPI.h>
#include <SdFat.h>

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085.h>

// --------------------------------------------------
// ORION FLIGHT COMPUTER
// Wokwi Prototype
//
// Simulated hardware:
// Arduino Nano
// MPU6050
// BMP180 (proxy for final BMP388)
// MicroSD card
// --------------------------------------------------


// ---------- Hardware ----------

Adafruit_MPU6050 mpu;
Adafruit_BMP085 bmp;

SdFat sd;
File flightFile;

const int SD_CS_PIN = 10;


// ---------- Logging ----------

const unsigned long SAMPLE_INTERVAL = 100;   // 10 Hz
const unsigned long FLUSH_INTERVAL = 1000;

unsigned long lastSample = 0;
unsigned long lastFlush = 0;


// ---------- Flight data ----------

float launchAltitude = 0.0;
float maximumAltitude = 0.0;


// --------------------------------------------------
// SETUP
// --------------------------------------------------

void setup() {

  Serial.begin(115200);

  delay(500);

  Serial.println();
  Serial.println("================================");
  Serial.println("   ORION FLIGHT COMPUTER");
  Serial.println("      WOKWI PROTOTYPE");
  Serial.println("================================");
  Serial.println();


  // ---------------- MPU6050 ----------------

  Serial.print("MPU6050: ");

  if (!mpu.begin()) {
    Serial.println("FAILED");
    stopSystem();
  }

  Serial.println("OK");

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);


  // ---------------- BMP180 ----------------

  Serial.print("BMP180:  ");

  if (!bmp.begin()) {
    Serial.println("FAILED");
    stopSystem();
  }

  Serial.println("OK");


  // Establish starting altitude

  launchAltitude = bmp.readAltitude();

  Serial.print("Reference altitude: ");
  Serial.print(launchAltitude);
  Serial.println(" m");


  // ---------------- SD CARD ----------------

  Serial.print("SD Card: ");

  if (!sd.begin(SD_CS_PIN, SD_SCK_MHZ(4))) {
    Serial.println("FAILED");
    stopSystem();
  }

  Serial.println("OK");


  // Create flight log

  flightFile = sd.open("FLIGHT.CSV", FILE_WRITE);

  if (!flightFile) {

    Serial.println("Could not create FLIGHT.CSV");
    stopSystem();
  }


  // CSV headings

  flightFile.println(
    "time_ms,"
    "altitude_m,"
    "pressure_pa,"
    "temperature_c,"
    "accel_x,"
    "accel_y,"
    "accel_z,"
    "gyro_x,"
    "gyro_y,"
    "gyro_z"
  );

  flightFile.flush();


  Serial.println();
  Serial.println("FLIGHT.CSV created.");
  Serial.println();
  Serial.println("Orion ready.");
  Serial.println();

  Serial.println(
    "TIME(ms) | ALT(m) | PRESSURE(Pa) | "
    "AX | AY | AZ"
  );
}


// --------------------------------------------------
// MAIN LOOP
// --------------------------------------------------

void loop() {

  unsigned long currentTime = millis();


  if (currentTime - lastSample >= SAMPLE_INTERVAL) {

    lastSample = currentTime;

    readAndLogSensors(currentTime);
  }


  // Periodically commit data to SD

  if (currentTime - lastFlush >= FLUSH_INTERVAL) {

    lastFlush = currentTime;

    flightFile.flush();
  }
}


// --------------------------------------------------
// READ SENSORS
// --------------------------------------------------

void readAndLogSensors(unsigned long timeMs) {

  sensors_event_t accel;
  sensors_event_t gyro;
  sensors_event_t temp;

  mpu.getEvent(&accel, &gyro, &temp);


  // ---------- Barometer ----------

  float pressure = bmp.readPressure();

  float temperature = bmp.readTemperature();

  float absoluteAltitude = bmp.readAltitude();

  // Relative altitude from starting position

  float altitude =
    absoluteAltitude - launchAltitude;


  // Record maximum altitude

  if (altitude > maximumAltitude) {
    maximumAltitude = altitude;
  }


  // ---------- Serial Monitor ----------

  Serial.print(timeMs);
  Serial.print(" | ");

  Serial.print(altitude, 2);
  Serial.print(" | ");

  Serial.print(pressure, 0);
  Serial.print(" | ");

  Serial.print(accel.acceleration.x, 2);
  Serial.print(" | ");

  Serial.print(accel.acceleration.y, 2);
  Serial.print(" | ");

  Serial.println(accel.acceleration.z, 2);


  // ---------- SD CARD ----------

  flightFile.print(timeMs);
  flightFile.print(',');

  flightFile.print(altitude, 2);
  flightFile.print(',');

  flightFile.print(pressure, 0);
  flightFile.print(',');

  flightFile.print(temperature, 2);
  flightFile.print(',');

  flightFile.print(accel.acceleration.x, 3);
  flightFile.print(',');

  flightFile.print(accel.acceleration.y, 3);
  flightFile.print(',');

  flightFile.print(accel.acceleration.z, 3);
  flightFile.print(',');

  flightFile.print(gyro.gyro.x, 4);
  flightFile.print(',');

  flightFile.print(gyro.gyro.y, 4);
  flightFile.print(',');

  flightFile.println(gyro.gyro.z, 4);
}


// --------------------------------------------------
// ERROR STATE
// --------------------------------------------------

void stopSystem() {

  Serial.println();
  Serial.println("ORION HALTED");

  while (true) {
    delay(1000);
  }
}
