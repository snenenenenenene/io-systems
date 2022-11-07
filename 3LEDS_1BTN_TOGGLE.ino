// // TURN ON THE NEXT LED WHEN PRESSING THE BUTTON, AND TURN OFF THE PREVIOUS LED
// #define LED1 11
// #define LED2 10
// #define LED3 9
// #define BTN 12
// #define AMNT_OF_LEDS 3
// // START AT 2 SO THE FIRST LED IS LED1
// int index = 2;

// void setup()
// {
//     pinMode(LED1, OUTPUT);
//     pinMode(LED2, OUTPUT);
//     pinMode(LED3, OUTPUT);
//     pinMode(BTN, INPUT_PULLUP);
// }

// void loop()
// {
//     if (digitalRead(BTN) == 0)
//     {
//         index = (index + 1) % AMNT_OF_LEDS;
//         digitalWrite(LED1, index == 0);
//         digitalWrite(LED2, index == 1);
//         digitalWrite(LED3, index == 2);
//         delay(50);
//         while (digitalRead(BTN) == 0)
//             ;
//         delay(50);
//     }
// }
