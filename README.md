<h1 align="center">Arduino Uno R4 LED Matrix 2-Digit Number Library</h1>

<p align="center">
  <a href="https://github.com/mgecawicz/Arduino_Uno_R4_2_Digit_Display/releases/latest">
    <img src="https://img.shields.io/github/v/release/mgecawicz/Arduino_Uno_R4_2_Digit_Display.svg?style=flat-square" alt="Latest Release">
  </a>
</p>

<p align="center">
  A powerful Arduino library that generates 2-digit numbers for the Arduino Uno R4's LED Matrix.
</p>

---

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Basic Usage](#usage)
- [Examples](#examples)

---

## Features

- Generate 2-digit numbers for the Arduino Uno R4's LED Matrix.
- Supports numbers from 0 to 99

---

## Installation

1. Download the library by clicking on the **[Latest Release](https://github.com/mgecawicz/Arduino_Uno_R4_2_Digit_Display/releases/latest)** link.
2. Extract the downloaded ZIP file.
3. Move the extracted folder to the Arduino libraries directory.
   - For Windows: `Documents/Arduino/libraries/`
   - For macOS: `~/Documents/Arduino/libraries/`
   - For Linux: `~/Arduino/libraries/`
4. Restart the Arduino IDE.

---

## Usage

1. Include the library in your Arduino sketch:
   ```cpp
   #include <ArduinoR4DigitDisplay.h>
   ```
2. Include the Aruino Matrix Library and create a matrix instance:
   ```ccp
   #include "Arduino_LED_Matrix.h"
   ArduinoLEDMatrix matrix;
   ```
3. Setup the Sketch:
   ```cpp
   void setup() {
      Serial.begin(115200);
      matrix.begin();
   }
   ```
4. Create the matrix frame:
   ```cpp
   uint8_t frame[8][12] = {
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };
   ```
5. Create the sketch loop with the drawNumber function:
   ```cpp
   void loop(){
    drawNumber(49,frame);
    matrix.renderBitmap(frame, 8, 12);
   }
   ```

---
## Examples
```cpp
#include <ArduinoR4DigitDisplay.h>

#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

uint8_t frame[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void loop(){
  drawNumber(49,frame);
  matrix.renderBitmap(frame, 8, 12);
}
```

   

