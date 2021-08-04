#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;
const int BUTTON_PIN_IN = A0;

void setup() {
  pinMode(BUTTON_PIN_IN, INPUT); 
  
  Serial.begin(9600);
  if (!driver.init()) {
    Serial.println("init failed");
  }
  Serial.println("init OK");
}

void loop() {
  const char *msg = "Hello World!";
  static uint8_t lastBtnState = LOW;
  uint8_t state = digitalRead(BUTTON_PIN_IN);
  bool isMessageSent = false;

  if (state != lastBtnState) {
    lastBtnState = state;

    if(!isMessageSent) {
      driver.send((uint8_t *)msg, strlen(msg));
      driver.waitPacketSent();
      isMessageSent = true;
      
      Serial.println("Message sent");
    }
    
    if (state == HIGH) {
      Serial.println("Button pressed!");
    }
  }
  delay(200);
}
