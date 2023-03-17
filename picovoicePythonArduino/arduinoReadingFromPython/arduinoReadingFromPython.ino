String value;

void setup() {
 Serial.begin(9600);
 pinMode(LEDB, OUTPUT);
 digitalWrite(LEDB, HIGH);
}
void loop() {
 value = Serial.readString();
 // Insert here below your conditions to trigger something from the python code
 if(value == "Hello"){
   digitalWrite(LEDB, LOW);
   delay(200);
   digitalWrite(LEDB, HIGH);
   delay(300);
   digitalWrite(LEDB, LOW);
   delay(200);
   digitalWrite(LEDB, HIGH);
 };
}