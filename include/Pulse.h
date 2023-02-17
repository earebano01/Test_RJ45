#include <Arduino.h>
// #define PIN1 20
// #define PIN2 21
// #define PIN3 0
// #define PIN4 1
// #define PIN5 2
// #define PIN6 3
// #define PIN7 4
// #define PIN8 5

// #define PINOUT1 13
// #define PINOUT2 12
// #define PINOUT3 11
// #define PINOUT4 10
// #define PINOUT5 9
// #define PINOUT6 8
// #define PINOUT7 7
// #define PINOUT8 6

class Pulse
{
private:
    // byte pin;
    int pin1;
    int pin2;
    int pin3;
    int pin4;
    int pin5;
    int pin6;
    int pin7;
    int pin8;

    int pinOut1;
    int pinOut2;
    int pinOut3;
    int pinOut4;
    int pinOut5;
    int pinOut6;
    int pinOut7;
    int pinOut8;

    int sig1 = 0;
    int sig2 = 0;
    int sig3 = 0;
    int sig4 = 0;
    int sig5 = 0;
    int sig6 = 0;
    int sig7 = 0;
    int sig8 = 0;

    int sigOut1 = 0;
    int sigOut2 = 0;
    int sigOut3 = 0;
    int sigOut4 = 0;
    int sigOut5 = 0;
    int sigOut6 = 0;
    int sigOut7 = 0;
    int sigOut8 = 0;

    
public:
    // Init(byte pin);
    Pulse(
    int pin1,
    int pin2,
    int pin3,
    int pin4,
    int pin5,
    int pin6,
    int pin7,
    int pin8,
    int pinOut1,
    int pinOut2,
    int pinOut3,
    int pinOut4,
    int pinOut5,
    int pinOut6,
    int pinOut7,
    int pinOut8);
    // ~Init();

    void pinIn(); 
    // {
    //     pinMode(pin,INPUT);
    //     pinMode(pin1,INPUT);
    //     pinMode(pin2,INPUT);
    //     pinMode(pin3,INPUT);
    //     pinMode(pin4,INPUT);
    //     pinMode(pin5,INPUT);
    //     pinMode(pin6,INPUT);
    //     pinMode(pin7,INPUT);
    //     pinMode(pin8,INPUT);
    // }

    void pinOut(); 
    // {
    //     // pinMode(pin, INPUT);
    //     pinMode(pinOut1,INPUT_PULLUP);
    //     pinMode(pinOut2,INPUT_PULLUP);
    //     pinMode(pinOut3,INPUT_PULLUP);
    //     pinMode(pinOut4,INPUT_PULLUP);
    //     pinMode(pinOut5,INPUT_PULLUP);
    //     pinMode(pinOut6,INPUT_PULLUP);
    //     pinMode(pinOut7,INPUT_PULLUP);
    //     pinMode(pinOut8,INPUT_PULLUP);
    // }

    void pulseIO();

    // {
    //     sigOut1 = digitalRead(pinOut1);
    //     sig1 = digitalRead(pin1);
    //     sigOut2 = digitalRead(pinOut2);
    //     sig2 = digitalRead(pin2);
    //     sigOut3 = digitalRead(pinOut3);
    //     sig3 = digitalRead(pin3);
    //     sigOut4 = digitalRead(pinOut4);
    //     sig4 = digitalRead(pin4);
    //     sigOut5 = digitalRead(pinOut5);
    //     sig5 = digitalRead(pin5);
    //     sigOut6 = digitalRead(pinOut6);
    //     sig6 = digitalRead(pin6);
    //     sigOut7 = digitalRead(pinOut7);
    //     sig7 = digitalRead(pin7);
    //     sigOut8 = digitalRead(pinOut8);
    //     sig8 = digitalRead(pin8);
    // }

    void testerRJ45();

};




// class Led {
//   private:
//     byte pin;

//   public:
//     Led(byte pin){
//       // this->pin = pin;
//     };

//     void pinOut() {
//       pinMode(pin, OUTPUT);
//     }

//     void on() {
//       digitalWrite(pin, HIGH);
//     }

//     void off() {
//       digitalWrite(pin, LOW);
//     }

// }; 
