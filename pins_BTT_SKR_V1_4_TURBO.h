// SKR v1.4 Turbo pin definitions and stepper motor configuration for Geeetech A20T printer

#define X_STEP_PIN 24
#define X_DIR_PIN 23
#define X_ENABLE_PIN 22
#define Y_STEP_PIN 26
#define Y_DIR_PIN 25
#define Y_ENABLE_PIN 27
#define Z_STEP_PIN 30
#define Z_DIR_PIN 29
#define Z_ENABLE_PIN 28
#define E0_STEP_PIN 32
#define E0_DIR_PIN 31
#define E0_ENABLE_PIN 33

#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_1 1
#define TEMP_SENSOR_BED 1

#define HEATER_0_PIN 9
#define HEATER_BED_PIN 10
#define TEMP_0_PIN A0
#define TEMP_BED_PIN A1

#define BL_ENABLE_PIN 14
#define BL_PIN 15

// Define stepper motor settings
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }  // X, Y, Z, E
#define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 25 }    // X, Y, Z, E
#define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 10000 }  // X, Y, Z, E
#define DEFAULT_MOTOR_CURRENT         750

