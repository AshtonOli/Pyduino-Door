int inputPin = 8;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  
  if (val == HIGH)	// check if the input is HIGH
  {            
    digitalWrite(LED_BUILTIN, HIGH);  // turn LED ON
	
    if (pirState == LOW) 
	{
      Serial.println("Motion detected");	// print on output change
      // Serial << "Motion detected" << endl;
      pirState = HIGH;
    }
  } 
  else 
  {
    digitalWrite(LED_BUILTIN, LOW); // turn LED OFF
	
    if (pirState == HIGH)
	{
      Serial.println("Motion ended");	// print on output change
      // Serial << "Motion ended" << endl;
      pirState = LOW;
    }
  }
}