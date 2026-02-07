# BUILD AND FLASH GUIDE for SKR v1.4 Turbo Marlin Firmware

## Introduction
This guide provides comprehensive instructions on how to build and flash the Marlin firmware for the SKR v1.4 Turbo. It includes step-by-step methods, troubleshooting tips, and first boot checks.

## Prerequisites
Before proceeding, ensure you have the following:
- SKR v1.4 Turbo board
- USB cable to connect the board to your computer
- Arduino IDE or PlatformIO installed on your computer

## Step 1: Download Firmware
1. Visit the official Marlin GitHub repository: https://github.com/MarlinFirmware/Marlin
2. Download the latest version of the firmware as a ZIP file.

## Step 2: Configure Firmware
1. Unzip the downloaded firmware.
2. Open the Marlin folder and locate the `Configuration.h` and `Configuration_adv.h` files.
3. Select your motherboard. For the SKR v1.4 Turbo, set `#define MOTHERBOARD BOARD_BTT_SKR_V1_4_TURBO` in `Configuration.h`.
4. Adjust other settings such as bed size, steps per mm, etc., according to your printer specifications.

## Step 3: Build Firmware
### Using Arduino IDE
1. Open Arduino IDE.
2. Select the correct board and port under the Tools menu.
3. Open the `Marlin.ino` file and click on the checkmark (✔️) to compile the firmware.

### Using PlatformIO
1. Open your terminal or command prompt.
2. Navigate to the Marlin directory.
3. Use the command `pio run --target upload` to build and upload the firmware directly to your board.

## Step 4: Flashing the Firmware
1. Connect your SKR v1.4 Turbo board to your computer using the USB cable.
2. If using Arduino IDE, select `Upload` to flash the firmware to the board.
3. If using PlatformIO, the firmware will be flashed automatically if you used the upload command.

## Step 5: Troubleshooting
- **Common Issues**:
  - If the board is not recognized, ensure the USB driver is installed.
  - Check the connections and power supply to the SKR board.
- **Debugging Tips**:
  - Use the serial monitor in Arduino IDE to catch any startup messages.

## Step 6: First Boot Checks
1. Disconnect and reconnect the power supply.
2. Check if the display powers on and is responsive.
3. Verify temperature readings and ensure the fans are operational.
4. Run a test print to ensure everything functions as expected.

## Conclusion
Following these instructions will help you successfully build and flash the Marlin firmware on your SKR v1.4 Turbo board. If you encounter issues, refer to the troubleshooting section for assistance.