#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 2


int paddleUp = 10;
int paddleDown = 11;
int driverPUL = 9;    // PUL- pin
int driverDIR = 8;    // DIR- pin
int reverseGear = 12;




int pd = 500;       // Pulse Delay period
boolean setdir = LOW; // Set Direction


void revmotor (){
 
  setdir = !setdir;

}

void setup() {

Serial.begin(9600);

//clutch funtctions for stepper motor

 pinMode (driverPUL, OUTPUT);
 pinMode (driverDIR, OUTPUT);

 pinMode(paddleUp, INPUT);
 pinMode(paddleDown, INPUT);
 pinMode(reverseGear, INPUT);

 digitalWrite(reverseGear, LOW);
 digitalWrite(paddleUp, LOW);
 digitalWrite(paddleDown, LOW);


}

void loop() {

    digitalRead(7);
    digitalRead(10);
    digitalRead(11);

    if (digitalRead(reverseGear) == HIGH){
     Serial.print("reverse");
     return;
   }
    else if (digitalRead(paddleUp) == HIGH) {
      Serial.print("Up");
    upShiftFunction();
  }
    else if (digitalRead(paddleDown) == HIGH) {
      Serial.print("Down");
    downShiftFunction();
  }
  return;
}


int getGearFunction (int gear){

  int gearDisplay;
  gearDisplay = gear;

    digitalRead(3);
    digitalRead(4);
    digitalRead(5);
    digitalRead(6);


    return gearDisplay;
}

int upShiftFunction (){

 int getGearFunction(int gear);
 int gearValue;



 if (gearValue = 0){
  cluchDownFunction();
 } else if (gearValue = 1) {

 } else if (gearValue = 2) {

 } else if (gearValue = 3) {

 } else if (gearValue = 4){

 }
}

int downShiftFunction (){

 int getGearFunction(int gear);
 int gearValue;

// gearValue = getGearFunction(int gear);

 if (gearValue = 0){

 } else if (gearValue = 1) {

 } else if (gearValue = 2) {

 } else if (gearValue = 3) {

 } else if (gearValue = 4){

 }
}


int cluchDownFunction (){

    digitalWrite(driverDIR,setdir);
    digitalWrite(driverPUL,HIGH);
    delayMicroseconds(pd);
    digitalWrite(driverPUL,LOW);
    delayMicroseconds(pd);

}


int clutchUpFunction (){

}
