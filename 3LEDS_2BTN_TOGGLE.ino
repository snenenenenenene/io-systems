// // TURN ON THE NEXT LED WHEN PRESSING THE BUTTON, AND TURN OFF THE PREVIOUS LED, WHEN THE OTHER BUTTON IS BEING PRESSED GO BACKWARDS
// #define LED1 11
// #define LED2 10
// #define LED3 9
// #define BTN1 12
// #define BTN2 8
// #define AMNT_OF_LEDS 3
// // START AT 2 SO THE FIRST LED IS LED1
// int index = 2;

// void setup()
// {
//     pinMode(LED1, OUTPUT);
//     pinMode(LED2, OUTPUT);
//     pinMode(LED3, OUTPUT);
//     pinMode(BTN1, INPUT_PULLUP);
//     pinMode(BTN2, INPUT_PULLUP);
// }

// void loop()
// {
//     if (digitalRead(BTN1) == 0) {
//         index = (index + 1) % AMNT_OF_LEDS;
//         digitalWrite(LED1, index == 0); // true, 1, HIGH
//         digitalWrite(LED2, index == 1); // false, 0, LOW
//         digitalWrite(LED3, index == 2); // false, 0, LOW
//         delay(50);
//         while(digitalRead(BTN1) == 0);
//         delay(50);
//     } else if (digitalRead(BTN2) == 0) {
//         index = (index - 1) % AMNT_OF_LEDS;
//         if (index < 0) {
//             index = AMNT_OF_LEDS -1;
//         }
//         digitalWrite(LED1, index == 0); // true, 1, HIGH
//         digitalWrite(LED2, index == 1); // false, 0, LOW
//         digitalWrite(LED3, index == 2); // false, 0, LOW
//         delay(50);
//         while(digitalRead(BTN2) == 0);
//         delay(50);
//     }

// }
