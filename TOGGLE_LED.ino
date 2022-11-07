// // TOGGLE THE STATE OF THE LED WITH A BUTTON

// #define BTN 11
// #define BULB 12
// bool state = false;

// void setup () {
//     Serial.begin(9600);
//     pinMode(BTN, INPUT_PULLUP);
//     pinMode(BULB, OUTPUT);
// }

// void loop () {
//     if (digitalRead(BTN) == 0) {
//         state = !state;
//         digitalWrite(BULB, state);
//         delay(50);
//         while(digitalRead(BTN) == 0);
//         delay(50);
//     }
// }
