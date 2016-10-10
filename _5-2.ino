void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.write(0xf5);
  Serial.write(0xff);
  Serial.write(0x3f);
  Serial.write(0xf3);
  Serial.write(0x44);
  delay(2000);
}
