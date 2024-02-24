#include <FastLED.h>
#define NUM_LEDS 6
#define DECAY_VALUE 150  // higher is faster
#define DELAY 140  //higher is slower


CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS); }
void loop() {
        for(int dot = 0; dot < NUM_LEDS; dot++) {
            leds[dot] = CRGB::Blue;
            FastLED.show();
            decay(leds);
            delay(DELAY);
        }
        for(int dot = NUM_LEDS-1; dot >=0; dot--) {
            leds[dot] = CRGB::Blue;
            FastLED.show();
            decay(leds);
            delay(DELAY);
        }
    }


void decay(CRGB leds[NUM_LEDS]){
    fadeToBlackBy(leds,NUM_LEDS,DECAY_VALUE);
    FastLED.show();
}