#include <Arduino.h>

class Pulse
{
private:
    
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

    void pinIn(); 

    void pinOut(); 

    void pulseIO();

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
