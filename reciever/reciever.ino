#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;
const int buzzer = 9; //buzzer to arduino pin 9
const int timesToRepeatAlarmTone = 0;

void setup() {
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
    
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

    alarm(timesToRepeatAlarmTone);
  }
}

void alarm(int timesToRepeat) {
  for (int i = 0; i < timesToRepeat; i++) {
      tone(buzzer, 2000);
      delay(250);
      noTone(buzzer);
      delay(250);
      tone(buzzer, 2000);
      delay(250);
      noTone(buzzer);
      delay(2000);
  }
}
