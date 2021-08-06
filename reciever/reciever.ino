#include <Manchester.h>
#include <TonePlayer.h>

/*

Manchester Receiver example

  In this example receiver will receive one 16 bit number per transmittion

Try different speeds using this constants, your maximum possible speed will 

  depend on various factors like transmitter type, distance, microcontroller speed, ...

  MAN_300 0
  MAN_600 1
  MAN_1200 2
  MAN_2400 3
  MAN_4800 4
  MAN_9600 5
  MAN_19200 6
  MAN_38400 7

*/

TonePlayer tone1 (TCCR1A, TCCR1B, OCR1AH, OCR1AL, TCNT1H, TCNT1L);  // pin D9 (Uno), D11 (Mega)

const int RX_PIN = 7;
const int buzzer = A0; //buzzer to arduino pin 9
const int timesToRepeatAlarmTone = 2;

void setup() {
  pinMode (9, OUTPUT);  // output pin is fixed (OC1A)
  
  Serial.begin(9600);
  
  man.setupReceive(RX_PIN, MAN_1200);
  man.beginReceive();
  
  tone1.tone (500);
  delay (500);
  tone1.noTone ();
}

void loop() {
  if (man.receiveComplete()) {
    uint16_t m = man.getMessage();
    Serial.println(m);

    
    alarm(timesToRepeatAlarmTone);
    man.beginReceive(); //start listening for next message right after you retrieve the message
  }
}

void alarm(int timesToRepeat) {
  for (int i = 0; i < timesToRepeat; i++) {
      tones(2000, 250);
  
      delay(2000);
  }
}

void tones(int hz, int ms) {
    tone1.tone(hz);
    delay(ms);
    tone1.noTone();
}
