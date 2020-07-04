void setup() {
  pinMode(11,OUTPUT);

}

void loop() {
  for(int i=0; i< 256; i=i+2)
  {
    analogWrite(11,i);
    delay(5);
  }
  for(int i=255; i > -1; i=i-2)
  {
    analogWrite(11,i);
    delay(5);
  }

}
