#define pinInO 2
#define pinInG 3

void setup() {
  pinMode(pinInO, INPUT);
  pinMode(pinInG, INPUT); 
  Serial.begin(57600);
  Serial.print("\nTesting... \n");
}

void loop() {
  bool goState    = digitalRead(pinInO);  // Read the state from pin 2 aka the orange button
  bool greenState = digitalRead(pinInG);  // Read the state from pin 3 aka the green button
  if (goState == true && greenState == LOW) {
    Serial.println("Good to go!\n");
    greenState = false;
    goState    = false;
  } else if (goState == false && greenState == HIGH) {
    Serial.println("Something is wrong... Start aborted. \n");
    greenState = false;
    goState    = false;
  }
  else if (goState == true && greenState == HIGH){
    Serial.print("Ride is going...\n");
    greenState = false;
    goState    = false;
  }
}
