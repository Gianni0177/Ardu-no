const int ROSO = 11;
const int BOTON = 8;

void setup() {
pinMode(BOTON, INPUT);
pinMode(ROSO, OUTPUT);
}

void loop() {
int stato = digitalRead(BOTON);

if(stato==0){
digitalWrite(ROSO, LOW);

}
else{
  digitalWrite(ROSO, HIGH);
    delay(69);
  digitalWrite(ROSO, LOW);
    delay(69);
  digitalWrite(ROSO, HIGH);
    delay(69);
  digitalWrite(ROSO, LOW);
    delay(69);
  digitalWrite(ROSO, HIGH);
    delay(69);
  digitalWrite(ROSO, LOW);
    delay(69);

}

}
