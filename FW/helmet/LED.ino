void Loading_LED() {
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(150, 150, 150));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(100);
  }
}

void led_right() {
  int index = 0 ;
  while (index < 5) {
    for (int i = 0; i < 12; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(150, 150, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      delay(50);
    }
    for (int i = 0; i < 12; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(0, 0, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      delay(50);
    }
    index++;
  }
}

void led_left() {
  int index = 0 ;
  while (index < 5) {
    for (int i = 12; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(150, 150, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      delay(50);
    }
    for (int i = 12; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(0, 0, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      delay(50);
    }
    index++;
  }
}

void led_emg() {
  int index = 0 ;
  while (index < 5) {
    for (int i = 0; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(150, 150, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      //delay(50);
    }
    delay(500);
    for (int i = 0; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(0, 0, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      //delay(50);
    }
    delay(500);
    index++;
  }
}

void led_warring() {
  int index = 0 ;
  while (index < 2) {
    for (int i = 0; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(150, 0, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      //delay(50);
    }
    delay(500);
    for (int i = 0; i < 24; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(0, 0, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.
      //delay(50);
    }
    delay(500);
    index++;
  }
}

void blink_LED() {
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(150, 150, 150));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(150, 150, 150));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(150, 150, 150));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
}
