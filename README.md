# Hello World with WEMOS ESP32-S2 Pico and OLED LCD Screen

![Wemos Lolin S2 PICO Pinout](https://i.imgur.com/ieMDf3x.png)

## Overview

This project is a simple example of how to use the WEMOS LOLIN ESP32-S2 Pico microcontroller with built-in 128x32 SSD1306 OLED display. The program demonstrates the basics of setting up the hardware, initializing the display, connecting to a Wi-Fi network, and displaying a "Hello World" message as well as the IP address obtained.


## Features

- Connects to a Wi-Fi network and displays the IP address on the Serial Monitor.
- Initializes and controls a 128x32 SSD1306 OLED display.
- Displays a "Hello World" message on the OLED screen as well as the IP.
- Provides clear and well-documented code, making it easy to understand and extend.

## Hardware Requirements

- WEMOS ESP32-S2 Pico dev board with built in 128x32 SSD1306 OLED display
- USB-C cable

## Software Requirements

- Visual Studio Code
- PlatformIO IDE extension

## Installation

Clone the repository and open it in Visual Studio Code.

Open the project in PlatformIO and build it. Connect your WEMOS ESP32-S2 Pico to your computer and upload the code.

Add wifi credentials in a credentials.h folder.

To put the ESP32-S2 or ESP32-S3 into serial mode for USB connection: While connected via USB, press and hold the BOOT (or 0) button, press and release the RESET button, then release the BOOT (or 0) button. This may be necessary to make the device show up as a USB device if it is not already flashed.


## Usage

Monitor the Serial Output in PlatformIO and set the baud rate to `115200` if needed.

Check the OLED Display: The OLED screen should display "Hello World" and the IP address obtained upon successful upload and execution of the code.

![Lolin S2 PICO w 128x32 OLED](https://i.imgur.com/HMm98S8.jpeg)

## License

This project is licensed under the MIT License. 
