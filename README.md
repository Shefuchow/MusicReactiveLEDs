# MusicReactiveLEDs

The Goal of this project was to learn how to use hardware just by jumping straight into it. 
I wanted to have some LEDs react to sound (music). 
I thought it would be cool to have a reactive strip as a first personal project.

I had a Metro328 Board with the NODE MCU, a KY-038 Mic sound sensor, a WS2812B LED strip, breadboard, and jumperwires. 
Links to all these materials will be provided.

The way I approached this project was with doing the simplest task first, and then building up my skillset. 
For example: first lighting one led, then a couple, then making a cool pattern in a loop, then utilizing the microphone, 
then using the microphone input to control the chosen light pattern, and then finally reaching a sound reactive LED MVP.

## Getting Started

Set up your hardware by following the wiring diagrams provided in my Repo.

In my project, I resorted to only using 10 LEDs, rather than 60 as planned with an external power source due to lack of materials.

### Prerequisites

How to use the Arduino IDE

How to Wire a breadboard

### Installing

You will need the FastLED.h library to understand the basics of lighting each indvisual LED.

You will later need to install the AdaFruit_NeoPixel library (however, you can choose to download this first, when I was experiemneting and learning, I just decided to use the FastLED library with no particular calulation to the decison, I am a beginner) 

```
Open Arduino IDE -> Sketch -> Include Library -> Manage Library -> search your specific library ex: "FastLED"
```

## Built With

* [Metro 328](https://www.adafruit.com/product/2488) - The main board with the NODE MCU
* [LED Strip](https://www.amazon.com/gp/product/B01CDTED80/ref=oh_aui_detailpage_o05_s00?ie=UTF8&th=1) - WS2812B LED Strip
* [Mic Sound Sensor](https://www.amazon.com/DAOKI-Sensitivity-Microphone-Detection-Arduino/dp/B00XT0PH10/ref=sr_1_fkmr0_4?s=hi&ie=UTF8&qid=1543408547&sr=8-4-fkmr0&keywords=daoki+mic) - Microphone for audio input
* [BreadBoard+JumperWires](https://www.amazon.com/REXQualis-Electronics-Breadboard-Resistor-Raspberry/dp/B078XV3RK2/ref=sr_1_1_sspa?ie=UTF8&qid=1543408619&sr=8-1-spons&keywords=breadboard+and+jumper+wires&psc=1) - breadboard and jumper wires


## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.


## Authors

* **Sefath** - *Initial work* - [Shefuchow](https://github.com/Shefuchow/)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Google Home for being sound reactive to its on pings. I thought that was cool
* TBT when people used to use itunes and had those music visualizers in software. That'll probably be my next project.

