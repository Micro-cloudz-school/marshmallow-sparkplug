/*
 */

void setup() {
    Serial.begin(9600)
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
    //What ever you need when action 1 is recieved
  }

   if(controlInp == "2"){
    //What ever you need when action 2 is recieved
  }

   if(controlInp == "3"){
    //What ever you need when action 3 is recieved
  }
}
