/**This Example is just for use the Microphone Sound Sensor KY-038**/



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
boolean val = 0;
/*****************  SETUP FUNCTIONS  ****************************************/

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
  FastLED.addLeds<WS2812B, ledPin, RGB>(leds, NUM_LEDS);
}
  
void loop (){
  val =digitalRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val==HIGH) {
    leds[0] = CRGB(255, 0, 0);
    FastLED.show();
    delay(500);  
    leds[1] = CRGB(0, 255, 0);
    FastLED.show();
    delay(500);
    leds[2] = CRGB(0, 0, 255);
    FastLED.show();
    delay(500);
    leds[3] = CRGB(150, 0, 255);
    FastLED.show();
    delay(500);
    leds[4] = CRGB(255, 200, 20);
    FastLED.show();
    delay(500);
    leds[5] = CRGB(85, 60, 180);
    FastLED.show();
    delay(500);
    leds[6] = CRGB(50, 255, 20);
    FastLED.show();
    delay(500);
    FastLED.show();
  } else {
    leds[8] = CRGB(150, 0, 255);
    FastLED.show();
  }
  FastLED.clear();
}
