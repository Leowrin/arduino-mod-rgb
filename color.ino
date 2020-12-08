void readPot(){
  RPot = analogRead(RPotPin);
  GPot = analogRead(GPotPin);
  BPot = analogRead(BPotPin);
}

void color(int r,int g,int b){
  send_data(r,g,b);
  delay(10);
}
