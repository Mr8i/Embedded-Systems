// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 250 
#define WAIT_half_second_MS 500
#define DOT 150
#define DASH 450

#define dot     true
#define dash    false

DigitalOut greenLED(TRAF_GRN1_PIN);DigitalOut redLED(TRAF_RED1_PIN);DigitalOut amberLED(TRAF_YEL1_PIN);
Buzzer buzz;
Buttons buttons;

//int dot=DOT; 
//int dash=DASH;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{

 //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        //On for 150ms dot
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms 
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 150ms dot
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms 
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 150ms dot
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);


       //On for 450ms dash
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 450);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 450ms dash
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 450);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 450ms dash
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 450);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);

         //On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 150);  //150ms

        //off for 150ms
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 150);



        

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);

    }

// {
//     //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
//     int counter=0;
//     while (buttons.BlueButton == 0);
    
//     //Repeat everything "forever" (until the power is removed or the chip is reset)
   
   
   
//    while (true)
//     {
//         //On for 500ms
//         greenLED = 1;
//         buzz.playTone("C");
//         wait_us(WAIT_TIME_MS * 250);  //500ms

//         buzz.playTone("D");
//         wait_us(WAIT_TIME_MS * 250);

//         buzz.playTone("E");
//         wait_us(WAIT_TIME_MS * 250);

//         buzz.playTone("F");
//         wait_us(WAIT_TIME_MS * 250);

//         buzz.playTone("A", Buzzer::HIGHER_OCTAVE);
//         wait_us(WAIT_TIME_MS * 250);

//         buzz.playTone("B", Buzzer::HIGHER_OCTAVE);
//         wait_us(WAIT_TIME_MS * 250);

//         //Off for 500ms
//         greenLED = 0;
//         buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
//         wait_us(WAIT_TIME_MS * 250);  //500ms

//         //Pause
//         buzz.rest();
//         wait_us(WAIT_TIME_MS * 1000);

//     }
 

    
}






