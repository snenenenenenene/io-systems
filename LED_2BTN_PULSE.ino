// // let one LED pulse when button 1 is pressed but stop pulsing when button 2 is being pressed

// #define BULB 12
// #define BTN1 11
// #define BTN2 10
// #define DELAY_AMNT 500
// bool state = false;

// void setup()
// {
//     Serial.begin(9600);
//     pinMode(BULB, OUTPUT);
//     pinMode(BTN1, INPUT_PULLUP);
//     pinMode(BTN2, INPUT_PULLUP);
// }

// void beeping()
// {

//     digitalWrite(BULB, 1);
//     delay(DELAY_AMNT);
//     digitalWrite(BULB, 0);
//     delay(DELAY_AMNT);
// }

// void loop()
// {
//     if (digitalRead(BTN1) == 0)
//     {
//         state = true;
//         do
//         {
//             if (digitalRead(BTN2) == 0)
//             {
//                 state = false;
//                 delay(50);
//                 while (digitalRead(BTN2) == 0)
//                     ;
//                 delay(50);
//                 break;
//             }
//             beeping();

//         } while (state = true);
//     }
// }
