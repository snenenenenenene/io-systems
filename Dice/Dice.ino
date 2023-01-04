String serial_str;
int val;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(0);
  serial_str = String(val*0.00488) + " V";
  Serial.println(serial_str);
  delay(500);
}
