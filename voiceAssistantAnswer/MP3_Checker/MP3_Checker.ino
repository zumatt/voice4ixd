#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  Serial1.begin(9600);
  Serial.begin(115200);

  delay(4000);
  Serial.println("Starting");

  //start the MP3
  if (!myDFPlayer.begin(Serial1,  /*isACK = */true, /*doReset = */true)) {
    Serial.print("Connecting ...");
    while(!myDFPlayer.begin(Serial1)){
      Serial.print(".");
    };
    Serial.println("!");
    }
  Serial.println("Connected!");
  myDFPlayer.volume(30);  //Set volume value. From 0 to 30
}

void loop() {

  for (int i=0; i<20; i++){
    Serial.print("The file audio selected is: ");
    Serial.print(i);
    myDFPlayer.play(i);
    delay(1000);
  }

}