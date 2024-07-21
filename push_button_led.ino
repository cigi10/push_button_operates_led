#define led_Pin 8
#define Button 7
void setup() {
  //Defining the pins as OUTPUT
  pinMode(led_Pin,  OUTPUT);              
  pinMode(Button, INPUT);
}
void  loop() {
if (digitalRead(Button)== HIGH) {
  digitalWrite(led_Pin, HIGH);
}
else {
  digitalWrite(led_Pin, LOW);
}
}

