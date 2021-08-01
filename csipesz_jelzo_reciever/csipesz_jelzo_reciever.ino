#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;

void setup() {
  Serial.begin(9600);
  if (!driver.init()) {
    Serial.println("init failed");
  }
  Serial.println("init OK");
}

void loop() {
  uint8_t buf[12];
  uint8_t buflen = sizeof(buf);
  
  if (driver.recv(buf, &buflen)) // Non-blocking
  {
    int i;
    Serial.print("Message: ");
    Serial.println((char*)buf);         
  }
}
