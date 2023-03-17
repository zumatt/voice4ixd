String value;

void setup() {
 Serial.begin(9600);
 pinMode(LEDB, OUTPUT);
 digitalWrite(LEDB, HIGH);
}
void loop() {
 value = Serial.readString();
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