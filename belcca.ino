/* 
 *  
 *  Copyright (c) Yosef Adi Sulistyo 2019
 *  
 */
 
#include <EEPROM.h>

#define LED_GROUPA1 2
#define LED_GROUPA2 3
#define LED_GROUPB1 4
#define LED_GROUPB2 5
#define LED_GROUPC1 6
#define LED_GROUPC2 7
#define LED_GROUPD1 8
#define LED_GROUPD2 9
#define LED_GROUPE1 10
#define LED_GROUPE2 11
#define BUZZER1 A0
#define BUZZER2 13
#define SWITCH_GROUPA A5
#define SWITCH_GROUPB A4
#define SWITCH_GROUPC A3
#define SWITCH_GROUPD A2
#define SWITCH_GROUPE A1

void setup() {
  //Serial.begin(9600);
  //Serial.print("Serial pin enabled!\n");
  pinMode(LED_GROUPA1,OUTPUT);
  pinMode(LED_GROUPA2,OUTPUT);
  pinMode(LED_GROUPB1,OUTPUT);
  pinMode(LED_GROUPB2,OUTPUT);
  pinMode(LED_GROUPC1,OUTPUT);
  pinMode(LED_GROUPC2,OUTPUT);
  pinMode(LED_GROUPD1,OUTPUT);
  pinMode(LED_GROUPD2,OUTPUT);
  pinMode(LED_GROUPE1,OUTPUT);
  pinMode(LED_GROUPE2,OUTPUT);
  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  pinMode(SWITCH_GROUPA,INPUT_PULLUP);
  pinMode(SWITCH_GROUPB,INPUT_PULLUP);
  pinMode(SWITCH_GROUPC,INPUT_PULLUP);
  pinMode(SWITCH_GROUPD,INPUT_PULLUP);
  pinMode(SWITCH_GROUPE  ,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(digitalRead(A5));
  bool valGA = digitalRead(SWITCH_GROUPA);
  bool valGB = digitalRead(SWITCH_GROUPB);
  bool valGC = digitalRead(SWITCH_GROUPC);
  bool valGD = digitalRead(SWITCH_GROUPD);
  bool valGE = digitalRead(SWITCH_GROUPE);
  
  if(valGA == 0) {
  digitalWrite(BUZZER1,HIGH);
  digitalWrite(BUZZER2,HIGH);
  digitalWrite(LED_GROUPA1,HIGH);
    digitalWrite(LED_GROUPA2,HIGH);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
  delay(5000);
  } else if(valGB == 0) {
    
  digitalWrite(BUZZER1,HIGH);
  digitalWrite(BUZZER2,HIGH);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, HIGH);
    digitalWrite(LED_GROUPB2,HIGH);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
  delay(5000);
  } else if(valGC == 0) {
     digitalWrite(BUZZER1,HIGH);
  digitalWrite(BUZZER2,HIGH);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,HIGH);
    digitalWrite(LED_GROUPC2,HIGH);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
    delay(5000);
  } else if(valGD == 0) {
     digitalWrite(BUZZER1,HIGH);
  digitalWrite(BUZZER2,HIGH);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,HIGH);
    digitalWrite(LED_GROUPD2,HIGH);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
    delay(5000);
  } else if (valGE == 0) {
     digitalWrite(BUZZER1,HIGH);
  digitalWrite(BUZZER2,HIGH);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,HIGH);
    digitalWrite(LED_GROUPE2,HIGH);
    delay(5000);
  }else if ((valGA == 0 && valGB == 0) || (valGA == 0 && valGC == 0) || (valGB == 0 && valGC == 0) ) {
     digitalWrite(BUZZER1,LOW);
  digitalWrite(BUZZER2,LOW);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
  } else { 
     digitalWrite(BUZZER1,LOW);
  digitalWrite(BUZZER2,LOW);
  digitalWrite(LED_GROUPA1,LOW);
  digitalWrite(LED_GROUPA2,LOW);
  digitalWrite(LED_GROUPB1, LOW);
    digitalWrite(LED_GROUPB2,LOW);
    digitalWrite(LED_GROUPC1,LOW);
    digitalWrite(LED_GROUPC2,LOW);
    digitalWrite(LED_GROUPD1,LOW);
    digitalWrite(LED_GROUPD2,LOW);
    digitalWrite(LED_GROUPE1,LOW);
    digitalWrite(LED_GROUPE2,LOW);
  }
}
