// voice_of_authority_ii.ino

const int audio_out = 8;

void setup() {

  pinMode(audio_out, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  tone(audio_out, 128);

  Serial.begin(57600);
}

void loop() {
  for (int i = 0; i < 16; i++) {
    digitalWrite(2, bitRead(i, 0));
    digitalWrite(3, bitRead(i, 1));
    digitalWrite(4, bitRead(i, 2));
    digitalWrite(5, bitRead(i, 3));
    delay(300);
  }
}

