float temp,value;
float volt = 0;
int tempPin = 0;

void setup() {
   Serial.begin(9600);
}

void loop() {
   value = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   volt = (5.0/1023.0)*value;
  temp = volt/0.01;
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1000); // update sensor reading each one second
}