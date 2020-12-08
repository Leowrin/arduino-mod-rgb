# arduino-mod-rgb
an arduino code to controll the rgb-mod board form Olimex.

ISSUES :
I don't know why but there is an issue with the i2c module on the mod-rgb board.
Normally the default adress is 0x22, but with my board I have to enter three adresses;
0x48, which is found with the i2c scanner,
the 0x05 and 0xA0, but I don't know why and can't remember where it comes from.
In send_data.ino :
  
  Wire.beginTransmission(0x48);
  Wire.write(0x05); //adress 2
  Wire.write(0XA0); //adress 3
