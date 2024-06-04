String value;

void setup() {
 Serial.begin(115200);
 pinMode(LED_BUILTIN, OUTPUT);
 digitalWrite(LED_BUILTIN, LOW);
}
void loop() {
 value = Serial.readString();
 if (value != ""){Serial.println("Value from Python: " + value);}
 // Insert here below your conditions to trigger something from the python code
 if(value == "turnOnlight"){
  digitalWrite(LED_BUILTIN, HIGH);
 } else if (value == "turnOfflight"){
  digitalWrite(LED_BUILTIN, LOW);
 }
}