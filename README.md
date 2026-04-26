# Smart Temperature Monitoring System (C++)

This project simulates a basic temperature monitoring system developed in C++. 
It demonstrates fundamental automation logic by analyzing simulated sensor data 
and triggering alerts when values exceed user-defined limits.

## Features
- Simulates temperature sensor readings
- Allows user-defined minimum and maximum thresholds
- Detects high and low temperature conditions
- Displays monitoring results in real time
- Provides basic statistical analysis (average, min, max)

## Technologies
- C++

## How it works
The program generates random temperature values and compares them with user-defined limits. 
If a value exceeds these thresholds, the system displays an alert indicating whether the 
temperature is too high or too low.

## How to run
Compile:
g++ main.cpp -o monitor

Run:
./monitor   (Linux/Mac)
.\monitor.exe   (Windows)

## Purpose
This project was created to strengthen understanding of core programming concepts such as 
loops, conditions, and data handling, while simulating a simple real-world monitoring system 
used in automation.
