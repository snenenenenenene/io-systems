int led_delay;
int adj_res_val;
#define BTN 2
#define LED 7
void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(BTN, INPUT_PULLUP);
}

void loop() {
    adj_res_val = analogRead(0);
if (digitalRead(BTN) == 0) {
  Serial.println(String(adj_res_val));
  }
  blinkLed(adj_res_val);
}

void blinkLed(int led_delay_int) {
  digitalWrite(LED, LOW);
  delay(led_delay_int);
  digitalWrite(LED, HIGH);
  delay(led_delay_int);
  }
