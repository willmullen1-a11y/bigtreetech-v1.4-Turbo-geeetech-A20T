// Configuration_adv.h

// Configuration file for advanced Marlin settings
// BTT SKR V1.4 Turbo with Geeetech A20T

// Enable thermal runaway protection
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_CHAMBER
#define THERMAL_PROTECTION_BED

// Stepper driver settings
#define TMC2130
#define TMC2130_STEALTHCHOP

// Bed leveling settings
#define AUTO_BED_LEVELING_BILINEAR
#define Z_PROBE_OFFSET_FROM_EXTRUDER -1.0 // Adjust as needed

// Other advanced features
#define POWER_LOSS_RECOVERY
#define LCD_AUTO_BRIGHTNESS
#define FEATURE_RETRACTION

// Additional configurations can go here...
