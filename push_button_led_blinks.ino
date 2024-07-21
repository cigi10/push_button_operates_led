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
  delay(1000);
  digitalWrite(led_Pin, LOW);
  delay(1000);
}
else {
  digitalWrite(led_Pin, LOW);
}
}
