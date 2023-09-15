const int switchPin = 13;  
const int motorPin = 5;   
const int bulbPin = 10;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);  
  pinMode(motorPin, OUTPUT);        
  pinMode(bulbPin, OUTPUT);         

  
  digitalWrite(motorPin, HIGH);
  digitalWrite(bulbPin, LOW);
}

void loop() {
  
  int switchState = digitalRead(switchPin);

 
  if (switchState == LOW) {
    
    digitalWrite(motorPin, LOW);
    digitalWrite(bulbPin, HIGH);
  } else {
   
    digitalWrite(motorPin, HIGH);
    digitalWrite(bulbPin, LOW);
  }
}
