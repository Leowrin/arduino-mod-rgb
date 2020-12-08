void send_color(byte r,byte g,byte b){
  Wire.beginTransmission(0x48);
  Wire.write(0x05); //adress 2
  Wire.write(0XA0); //adress 3
  Wire.write(0x03); // sets color 
  Wire.write(r);
  Wire.write(g);
  Wire.write(b);
  Wire.endTransmission();
}
