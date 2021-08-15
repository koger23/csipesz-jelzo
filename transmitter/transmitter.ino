#include <Manchester.h>

#define TX_PIN 2  //pin where your transmitter is connected

uint16_t transmit_data = 1;
int buttonPin = 3;
bool isButtonStateChanged = false;
int buttonsLastState = LOW;


void setup() {
  pinMode(buttonPin, INPUT);
  
  man.setupTransmit(TX_PIN, MAN_1200);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonsLastState != buttonState) {
    if (buttonState == HIGH) {
      buttonsLastState = HIGH;
    } else {
      buttonsLastState = LOW;
    }
    
    man.transmit(transmit_data);
  }
  delay(50);
}
