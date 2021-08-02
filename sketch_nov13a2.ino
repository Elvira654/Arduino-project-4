int led1 = 3;
int led2 = 4;
int led3 = 5;
int tipkalo1 = 6;
int tipkalo2 = 7;
int stanjetipkala1 = 0;
int stanjetipkala2 = 0;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(tipkalo1, OUTPUT);
pinMode(tipkalo2, OUTPUT);
}
void loop() {
stanjetipkala1 = digitalRead(tipkalo1);
stanjetipkala2 = digitalRead(tipkalo2);
if (stanjetipkala1 == 1) {
// turn LED on:
digitalWrite(led1, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led1, LOW); // turn the LED off (LOW is the voltage level)
digitalWrite(led2, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led2, LOW); // turn the LED off (LOW is the voltage level)
digitalWrite(led3, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led3, LOW); // turn the LED off (LOW is the voltage level)
} else if (stanjetipkala2 == 1) {
// turn LED on:
digitalWrite(led3, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led3, LOW);  // turn the LED off (LOW is the voltage level)
digitalWrite(led2, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led2, LOW); // turn the LED off (LOW is the voltage level)
digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(500);

digitalWrite(led1, LOW);  // turn the LED off (LOW is the voltage level)
} else {
digitalWrite(led1, LOW);  // turn the LED off by making the voltage LOW
digitalWrite(led2, LOW);  // turn the LED off by making the voltage LOW
digitalWrite(led3, LOW);  // turn the LED off by making the voltage LOW
}
}
