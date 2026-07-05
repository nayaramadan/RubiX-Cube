#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT  54

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Turn all LEDs off
}

void loop() {
  // LED #0
  strip.setPixelColor(0, strip.Color(255, 0, 0));

  // LED #1
  strip.setPixelColor(1, strip.Color(0, 255, 0));

  // LED #2
  strip.setPixelColor(2, strip.Color(0, 0, 255));

  // LED #3
  strip.setPixelColor(9, strip.Color(255, 255, 255));

  // Update the strip
  strip.show();

  delay(1000);
}