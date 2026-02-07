// Configuration.h for Marlin on SKR v1.4 Turbo for Geeetech A20T
#define MOTHERBOARD BOARD_BTT_SKR_V1_4_TURBO

// Printer dimensions
#define X_BED_SIZE 250
#define Y_BED_SIZE 250
#define Z_DEPTH 250

// Thermistor settings
#define TEMP_SENSOR_0 1  // Hotend NTC 100K
#define TEMP_SENSOR_BED 1  // Bed NTC 100K

// Stepper motor configuration
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 500 }  // X, Y, Z, E (example values)
#define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 25 }  // X, Y, Z, E
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 } // X, Y, Z, E

// Temperature limits
#define TEMP_HOTEND_MAX 250
#define TEMP_BED_MAX 110

// Acceleration settings
#define DEFAULT_ACCELERATION          3000  // mm/s^2
#define DEFAULT_RETRACT_ACCELERATION  3000  // mm/s^2

// Jerk settings
#define DEFAULT_XJERK 20.0  // mm/s
#define DEFAULT_YJERK 20.0  // mm/s
#define DEFAULT_ZJERK 0.4   // mm/s
#define DEFAULT_EJERK 5.0    // mm/s
