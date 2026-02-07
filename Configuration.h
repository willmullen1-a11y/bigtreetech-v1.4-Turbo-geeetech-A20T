// Configuration.h for Marlin firmware

#define MOTHERBOARD BOARD_BTT_SKR_V1_4_TURBO
#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_BED 1

// Mechanical Settings
#define X_BED_SIZE 220
#define Y_BED_SIZE 250
#define Z_BED_HEIGHT 300

// Define your endstop settings here
#define X_MIN_ENDSTOP INVERTING
#define Y_MIN_ENDSTOP INVERTING
#define Z_MIN_ENDSTOP INVERTING

// Define stepper settings here
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 500 }

// Uncomment to enable...
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_3POINT
