// TURN ON THE NEXT LED WHEN PRESSING THE BUTTON WHILE KEEPING THE PREVIOUS LED ON, AND TURN OFF ALL LEDS WHEN ALL ARE ON BUT ONLY DO IT IF SERIAL.READ() == a
#define LED1 11
#define LED2 10
#define LED3 9
#define BTN 12
#define AMNT_OF_LEDS 4
// START AT 2 SO THE FIRST LED IS LED1
int index = 4;

void setup()
{
    Serial.begin(9600);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(BTN, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(BTN) == 0 && Serial.available() && Serial.read() == 'a')
    {
        Serial.println(Serial.read());
        index = (index + 1) % AMNT_OF_LEDS;
        digitalWrite(LED1, index >= 1);
        digitalWrite(LED2, index >= 2);
        digitalWrite(LED3, index >= 3);
        Serial.println(index);
        delay(50);
        while (digitalRead(BTN) == 0)
            ;
        delay(50);
    }
}
