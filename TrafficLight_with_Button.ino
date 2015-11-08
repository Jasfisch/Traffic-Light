int red = 13; // all students will be using pin 13
int yellow = 12; // all students will be using pin 12
int green = 11; // all students will be using pin 11

int buttonPin = 2; // switch is on pin 2
int buttonState = 0; // switch defaults to 0

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
  pinMode(buttonPin,INPUT);
}

void loop() {
 // read the state of the pushbutton value:
  buttonState = digitalRead (buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(1000);

    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    delay(1000);

    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(1000);
  } else {
    // turn LED off:
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(1000);
  }
}
