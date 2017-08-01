/*
  Tuin kaku control
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();
int value;
int As;
int Bs;
int Cs;
int Ds;
int Es;
int Fs;
int A = 8;
int B = 9;
int C = 10;
int D = 11;
int E = 12;
int F = 13;

void setup() {
  Serial.begin(9600);
  mySwitch.enableReceive(0);  // Receiver on interrupt 0 => that is pin #2
}

void loop() {
  if (mySwitch.available()) {
    
    value = mySwitch.getReceivedValue();
    
    if (value == 0) {
      Serial.print("Unknown encoding");
    } else {
      Serial.print("Received ");
      Serial.println( mySwitch.getReceivedValue() );
      switchOutput();
    }

    mySwitch.resetAvailable();
  }
}

void switchOutput(){
  if (value == 122233) {
    if (As == 0) {
      digitalWrite(A, HIGH);As=1;
      Serial.println("A = HIGH");
    } else {
      digitalWrite(A, LOW);As=0;
      Serial.println("A = LOW");
    }   
  }
  if (value == 2) {
    if (Bs == 0) {
      digitalWrite(B, HIGH);Bs=1;
      Serial.println("B = HIGH");
    } else {
      digitalWrite(B, LOW);Bs=0;
      Serial.println("B = LOW");
    }   
  }
  if (value == 3) {
    if (Cs == 0) {
      digitalWrite(C, HIGH);Cs=1;
      Serial.println("C = HIGH");
    } else {
      digitalWrite(C, LOW);Cs=0;
      Serial.println("C = LOW");
    }   
  }
  if (value == 4) {
    if (Ds == 0) {
      digitalWrite(D, HIGH);Ds=1;
      Serial.println("D = HIGH");
    } else {
      digitalWrite(D, LOW);Ds=0;
      Serial.println("D = LOW");
    }   
  }
  if (value == 5) {
    if (Es == 0) {
      digitalWrite(E, HIGH);Es=1;
      Serial.println("E = HIGH");
    } else {
      digitalWrite(E, LOW);Es=0;
      Serial.println("E = LOW");
    }   
  }
  if (value == 6) {
    if (Fs == 0) {
      digitalWrite(F, HIGH);Fs=1;
      Serial.println("F = HIGH");
    } else {
      digitalWrite(F, LOW);Fs=0;
      Serial.println("F = LOW");
    }   
  }
  if (value == 7) {
    digitalWrite(A, HIGH);As=1;
    Serial.println("A = HIGH");
    delay(1000);    
    digitalWrite(B, HIGH);Bs=1;
    Serial.println("B = HIGH");
    delay(1000);
    digitalWrite(C, HIGH);Cs=1;
    Serial.println("C = HIGH");
    delay(1000);
    digitalWrite(D, HIGH);Ds=1;
    Serial.println("D = HIGH");
    delay(1000);
    digitalWrite(E, HIGH);Es=1;
    Serial.println("E = HIGH");
    delay(1000);
    digitalWrite(F, HIGH);Fs=1;
    Serial.println("F = HIGH"); 
  }
  if (value == 8) {
    digitalWrite(A, LOW);As=0;
    Serial.println("A = LOW");
    delay(1000);    
    digitalWrite(B, LOW);Bs=0;
    Serial.println("B = LOW");
    delay(1000);
    digitalWrite(C, LOW);Cs=0;
    Serial.println("C = LOW");
    delay(1000);
    digitalWrite(D, LOW);Ds=0;
    Serial.println("D = LOW");
    delay(1000);
    digitalWrite(E, LOW);Es=0;
    Serial.println("E = LOW");
    delay(1000);
    digitalWrite(F, LOW);Fs=0;
    Serial.println("F = LOW");      
  }
}

