/*
  Dobbelsteen *** parallel data transport
  Oefening display aansluiting en "switch case""
  Project gebaseerd op "Crystal Ball" uit arduino starterkitbook
  benodigdheden: 220 ohm resistor, 10 kilohm regelbare weerstand, 16x2 LCD screen, switch
*/
#define switchPin 6

#include <LiquidCrystal.h>             // include the library code:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize the library with the numbers of the interface pins

int switchState = 0;     // variable to hold the value of the switch pin
int prevSwitchState = 0; // variable to hold previous value of the switch pin
int reply;               // a variable to choose which reply from the crystal ball

void setup()
{
    lcd.begin(16, 2);                 // set up the number of columns and rows on the LCD
    pinMode(switchPin, INPUT_PULLUP); // set up the switch pin as an input
    lcd.print("Press to roll a");     // Print a message to the LCD.
    lcd.setCursor(0, 1);              // set the cursor to column 0, line 1
                                      // line 1 is the second row, since counting begins with 0
    lcd.print("D20");                 // print to the second line
}

void loop()
{
    switchState = digitalRead(switchPin); // check the status of the switch
    if (switchState != prevSwitchState)   // compare the switchState to its previous state
    {
        if (switchState == LOW)
        {
            reply = random(21);         // randomly chose a reply
            lcd.clear();                // clean up the screen before printing a new reply
            lcd.setCursor(0, 0);        // set the cursor to column 0, line 0
            lcd.print("you rolled a "); // print some text
            lcd.setCursor(0, 1);        // move the cursor to the second line

            switch (reply) // choose a saying to print based on the value in reply
            {
            case 0:
                lcd.print("critical fail");
                break;
            case 1:
                lcd.print("two");
                break;

            case 2:
                lcd.print("three");
                break;

            case 3:
                lcd.print("four");
                break;

            case 4:
                lcd.print("five");
                break;

            case 5:
                lcd.print("six");
                break;

            case 6:
                lcd.print("seven");
                break;
            case 7:
                lcd.print("eight");
                break;

            case 8:
                lcd.print("nine");
                break;

            case 9:
                lcd.print("ten");
                break;

            case 10:
                lcd.print("eleven");
                break;

            case 11:
                lcd.print("twelf");
                break;

            case 12:
                lcd.print("thirteen");
                break;

            case 13:
                lcd.print("fourteen");
                break;

            case 14:
                lcd.print("fifthteen");
                break;

            case 15:
                lcd.print("sixteen");
                break;

            case 16:
                lcd.print("seventeen");
                break;

            case 17:
                lcd.print("eightteen");
                break;

            case 18:
                lcd.print("nineteen");
                break;

            case 19:
                lcd.print("critical hit");
                break;

            case 20:
                lcd.print("try again");
                break;
            }
        }
        delay(50);
        while (digitalRead(switchState) == 0)
            ;
        delay(50);
    }
    prevSwitchState = switchState; // save the current switch state as the last state
}
