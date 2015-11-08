int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {

// turn on green
digitalWrite(green,HIGH); // green led is on
digitalWrite(yellow,LOW); // yellow led is off
digitalWrite(red,LOW); // red led is off
delay(1000); // wait 1 second

// turn on yellow
digitalWrite(green,LOW); // green led is off
digitalWrite(yellow,HIGH); // yellow led is on
digitalWrite(red,LOW); // red led is off
delay(2000); // wait 2 seconds

// turn on red
digitalWrite(green,LOW); // green led is off
digitalWrite(yellow,LOW); // yellow led is off
digitalWrite(red,HIGH); // red led is on
delay(3000); // wait 3 seconds

}
