#include <SD.h>                      // need to include the SD library
//#define SD_ChipSelectPin 53  //example uses hardware SS pin 53 on Mega2560
#define SD_ChipSelectPin 10  //using digital pin 4 on arduino nano 328, can use other pins
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch


void setup(){

  tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc

  Serial.begin(57600);
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not
  }
  //tmrpcm.setVolume(7);
  //tmrpcm.quality(1);
  tmrpcm.play("music"); //the sound file "music" will play each time the arduino powers up, or is reset
}



void loop(){  

if(!tmrpcm.isPlaying()) {
  tmrpcm.play("music");
}
  delay(2000);
}
