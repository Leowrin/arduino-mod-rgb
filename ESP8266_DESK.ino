#include <Wire.h>
#include <RGB.h>


#define RPotPin A0
#define GPotPin A1
#define BPotPin A2

int RState;
int GState;
int BState;
int RPot;
int GPot;
int BPot;

byte mode = 3;

void setup() {
    Wire.begin();
}

void loop() {

  
 if (mode == 0){
  color(0,0,0);
 }else if(mode ==1){
  
 }else if(mode ==2){
  readPot();
  color(RPot, GPot, BPot);
 }else if(mode==3){
  random_cycle();
 }
 
}
