# Automated-Baby-Plant-Monitoring
## Overview

This project implements an automated irrigation system using Arduino to monitor soil moisture, rain, light intensity, and humidity. Based on sensor readings, it controls a servo motor to adjust irrigation valve position and activates a pump using a relay for optimal plant watering.

## Features

- **Soil Moisture Monitoring:** Measures soil moisture to determine watering needs.
- **Rain Detection:** Detects rainfall to adjust irrigation schedule.
- **Light Intensity Sensing:** Monitors light levels to optimize watering during appropriate conditions.
- **Humidity Measurement:** Tracks humidity levels to ensure optimal plant growth conditions.

## Components Used

- **Arduino Uno**: Microcontroller for sensor interfacing and actuator control.
- **Sensors**:
  - Soil Moisture Sensor
  - Rain Sensor
  - Light Intensity Sensor
  - Humidity Sensor
- **Actuators**:
  - Servo Motor: Controls irrigation valve position.
  - Relay: Controls the water pump.
- **Other**:
  - LED Indicator
  - Serial Monitor for debugging

## Circuit Diagram

### Pin Connections

- **Soil Moisture Sensor**: Analog pin A5
- **Rain Sensor**: Digital pin 6
- **Light Intensity Sensor**: Analog pin A0
- **Humidity Sensor**: Analog pin A1
- **Servo Motor**: Digital pin 9
- **Relay (Pump Control)**: Digital pin 10

## Software Setup

### Libraries Required

- **Servo.h** (for controlling the Servo Motor)

### Arduino Code

1. Include the `Servo.h` library.
2. Define constants for pin mappings and thresholds.
3. Implement setup to initialize sensors and actuators.
4. Create a loop to continuously read sensor values and adjust actuators based on conditions.

### Adjustments

- **Thresholds**: Modify threshold values in the code to suit specific plant requirements and environmental conditions.
- **Sensor Calibration**: Calibrate sensors as needed to ensure accurate readings for soil moisture, rain, light intensity, and humidity.

## Operation

The system operates as follows:

- **Soil Moisture and Rain Detection**: Adjusts servo motor position to control irrigation valve and activates pump if soil is dry or rain is detected.
- **Light Intensity Sensing**: Ensures irrigation occurs during optimal light conditions for plant growth.
- **Humidity Monitoring**: Maintains appropriate humidity levels for plant health.

## Usage

1. Connect sensors and actuators according to the provided pin connections.
2. Upload the Arduino sketch to the Arduino Uno board.
3. Monitor sensor readings and system operation via the Serial Monitor.
4. Adjust parameters and thresholds as necessary for specific plant care requirements.
