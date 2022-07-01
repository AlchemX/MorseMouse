//for use with an Arduino Leonardo (or similar clone), 
//that has the ability to emulate a mouse and send mouse clicks to a connected PC

#include <Mouse.h>

#define MorseKeyPin 11;   //set this as you hooked it up to your LEonardo

bool mousebuttonstate = 0;
//using this variable as a state prevents us from sending excessive events to the PC

void setup() {
  pinMode(MorseKeyPin, INPUT_PULLUP);
  Mouse.begin(); //initiate the Mouse library
  Serial.begin(9600);
}

void loop() {
  
  if ( (digitalRead(MorseKeyPin) == LOW) && (mousebuttonstate == 0) ) {
    Serial.println("pressed");
    Mouse.press();
    mousebuttonstate = 1;
    digitalWrite(LED_BUILTIN, HIGH);
  }
  
  if ( (digitalRead(MorseKeyPin) == HIGH) && (mousebuttonstate == 1) ) {
    Serial.println("released");
    Mouse.release();
    mousebuttonstate = 0;
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(10);  //used to debounce physical morse keys. 
              //Never set to 0, unless you use an electronic keyer.    
              //adjust to your keying speed. lower delays = faster keying
}
