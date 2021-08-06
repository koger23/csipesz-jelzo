#include <Manchester.h>

#define TX_PIN 2  //pin where your transmitter is connected

uint16_t transmit_data = 1;
int buttonPin = 3;
bool isButtonStateChanged = false;
int buttonsLastState = 0;


void setup() {
  pinMode(buttonPin, INPUT);
  
  man.setupTransmit(TX_PIN, MAN_1200);
}

void loop() {
  if (buttonsLastState != digitalRead(buttonPin)) {
    buttonsLastState = digitalRead(buttonPin);
    
    man.transmit(transmit_data);
  }
  delay(300);
}
