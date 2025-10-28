/*
 */

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int laserSig = 4;
String inputString = "";
String controlInp = "";

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(laserSig, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
     if (Serial.available()) {
    // read until newline character
    inputString = Serial.readStringUntil('\n');
     }

    // remove any trailing \r (carriage return)
    inputString.trim();
    controlInp = inputString;

  if(controlInp == "1"){
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }

   if(controlInp == "2"){
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  }

   if(controlInp == "3"){
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  }

  if(controlInp == "hi"){
    digitalWrite(laserSig, LOW);
  }

  if(controlInp == "lo"){
    digitalWrite(laserSig, HIGH);
  }

}
