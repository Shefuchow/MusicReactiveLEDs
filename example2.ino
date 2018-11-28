
/*****************  NEEDED TO MAKE NODEMCU WORK ***************************/
#define FASTLED_INTERRUPT_RETRY_COUNT 0
#define FASTLED_ESP8266_RAW_PIN_ORDER
/******************  LIBRARY SECTION *************************************/
#include <FastLED.h>
/*****************  LED LAYOUT AND SETUP *********************************/
#define NUM_LEDS 10
/*****************  DECLARATIONS  ****************************************/
CRGB leds[NUM_LEDS];
/*****************  GLOBAL VARIABLES  ************************************/
const int ledPin = 6; 
int sensorPin = A5;
int val = 0;

/*****************  SETUP FUNCTIONS  ****************************************/
void setup() 
{
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
  FastLED.addLeds<WS2812B, ledPin, RGB>(leds, NUM_LEDS);
  Serial.begin (9600);
}
/*****************  MAIN LOOP  ****************************************/
void loop() {
  int val = digitalRead(sensorPin);
  int numLedsToLight = map(val, 0, 1023, 0, NUM_LEDS);

  // First, clear the existing led values
  FastLED.clear();
  for(int led = 0; led < numLedsToLight; led++) { 
      leds[led] = CRGB::Blue; 
  }
  FastLED.show();
}
