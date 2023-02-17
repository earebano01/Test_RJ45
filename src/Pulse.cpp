#include "Pulse.h"

Pulse::Pulse(
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
    int pinOut8){
    this->pin1 = pin1;
    this->pin2 = pin2;
    this->pin3 = pin3;
    this->pin4 = pin4;
    this->pin5 = pin5;
    this->pin6 = pin6;
    this->pin7 = pin7;
    this->pin8 = pin8;
    this->pinOut1 = pinOut1;
    this->pinOut2 = pinOut2;
    this->pinOut3 = pinOut3;
    this->pinOut4 = pinOut4;
    this->pinOut5 = pinOut5;
    this->pinOut6 = pinOut6;
    this->pinOut7 = pinOut7;
    this->pinOut8 = pinOut8;
}

void Pulse::pinIn(){
    pinMode(pin1,INPUT);
    pinMode(pin2,INPUT);
    pinMode(pin3,INPUT);
    pinMode(pin4,INPUT);
    pinMode(pin5,INPUT);
    pinMode(pin6,INPUT);
    pinMode(pin7,INPUT);
    pinMode(pin8,INPUT);
}

void Pulse::pinOut(){
    pinMode(pinOut1,INPUT_PULLUP);
    pinMode(pinOut2,INPUT_PULLUP);
    pinMode(pinOut3,INPUT_PULLUP);
    pinMode(pinOut4,INPUT_PULLUP);
    pinMode(pinOut5,INPUT_PULLUP);
    pinMode(pinOut6,INPUT_PULLUP);
    pinMode(pinOut7,INPUT_PULLUP);
    pinMode(pinOut8,INPUT_PULLUP);
}

void Pulse::pulseIO(){
    sigOut1 = digitalRead(pinOut1);
    sig1 = digitalRead(pin1);
    sigOut2 = digitalRead(pinOut2);
    sig2 = digitalRead(pin2);
    sigOut3 = digitalRead(pinOut3);
    sig3 = digitalRead(pin3);
    sigOut4 = digitalRead(pinOut4);
    sig4 = digitalRead(pin4);
    sigOut5 = digitalRead(pinOut5);
    sig5 = digitalRead(pin5);
    sigOut6 = digitalRead(pinOut6);
    sig6 = digitalRead(pin6);
    sigOut7 = digitalRead(pinOut7);
    sig7 = digitalRead(pin7);
    sigOut8 = digitalRead(pinOut8);
    sig8 = digitalRead(pin8);
}

void Pulse::testerRJ45(){
    Serial.print("================================================");
    Serial.println();
    Serial.print("| I/O du câble  | Numéro de broche             |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    Serial.print("| ");
    Serial.print(sigOut1);
    Serial.print(sigOut2);
    Serial.print(sigOut3);
    Serial.print(sigOut4);
    Serial.print(sigOut5);
    Serial.print(sigOut6);
    Serial.print(sigOut7);
    Serial.print(sigOut8);
    Serial.print(" - ");
    Serial.print("13 | ");
    Serial.print("12 | ");
    Serial.print("11 | ");
    Serial.print("10 | ");
    Serial.print("9 | ");
    Serial.print("8 | ");
    Serial.print("7 | ");
    Serial.print("6 |");
    Serial.println();
    Serial.print("| ");
    Serial.print(sig1);
    Serial.print(sig2);
    Serial.print(sig3);
    Serial.print(sig4);
    Serial.print(sig5);
    Serial.print(sig6);
    Serial.print(sig7);
    Serial.print(sig8);
    Serial.print(" - ");
    Serial.print("20 | ");
    Serial.print("21 | ");
    Serial.print(" 0 | ");
    Serial.print(" 1 | ");
    Serial.print("2 | ");
    Serial.print("3 | ");
    Serial.print("4 | ");
    Serial.print("5 |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    if (
        sigOut1 && sig3 == HIGH &&
        sigOut2 && sig6 == HIGH &&
        sigOut3 && sig1 == HIGH &&
        sigOut4 && sig8 == HIGH &&
        sigOut5 && sig7 == HIGH &&
        sigOut6 && sig2 == HIGH &&
        sigOut7 && sig5 == HIGH &&
        sigOut8 && sig4 == HIGH)
    {
        Serial.print("| TYPE: Câble Croisé");
    }
    else if (
        sigOut1 && sig1 == HIGH &&
        sigOut2 && sig2 == HIGH &&
        sigOut3 && sig3 == HIGH &&
        sigOut4 && sig4 == HIGH &&
        sigOut5 && sig5 == HIGH &&
        sigOut6 && sig6 == HIGH &&
        sigOut7 && sig7 == HIGH &&
        sigOut8 && sig8 == HIGH)
    {
        Serial.print("| TYPE: Câble Droit");
    }
    else
    {
        Serial.print("| TYPE: Inconnue ou Câble Cassé");
    }
    Serial.print("                           |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    delay(1000);
}

// #include "Led.h"

// Led::Led(byte pin) {
//   this->pin = pin;
// }

// void Led::pinOut() {
//   pinMode(pin, OUTPUT);
// }

// void Led::on() {
//   digitalWrite(pin, HIGH);
// }

// void Led::off() {
//   digitalWrite(pin, LOW);
// }