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
void siren(bool do_dot, DigitalOut* led){
    int delay=0;
    if(do_dot==true){
        delay = DOT*1000;
    }
    else{
        delay = DASH*1000;
    }
        //On for 500ms
        *led = 1;
        buzz.playTone("C");
        wait_us(delay);  //250ms

    //Pause
           //Off for 500ms
        *led = 0;
        buzz.rest();
        wait_us(delay);

//         //Off for 500ms
//       *led = 1;
//         buzz.playTone("G");
//         wait_us(DASH * 1000);  //250ms

//         //Pause
//         buzz.rest();
//         wait_us(DASH * 1000);
//   //On for 500ms
//         *led = 1;
//         buzz.playTone(dash);
//         wait_us(WAIT_TIME_MS * 1000);  //250ms

//         //Off for 500ms
//         *led = 0;
//         buzz.rest();
//         wait_us(WAIT_TIME_MS * 1000);
}


// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)
void playScale(char* note, DigitalOut* led){
        //On for 500ms
        *led = 1;
        buzz.playTone(note);
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Off for 500ms
        *led = 0;
        buzz.playTone(note, Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);

}

      

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    int counter=0;
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while(counter<2){
        playScale("C",&greenLED);
        playScale("D",&redLED);
        playScale("E",&amberLED);
        playScale("F",&greenLED);
        playScale("G",&redLED);
        playScale("A",&amberLED);
        playScale("B",&greenLED);
        playScale("C",&redLED);       // //On for 500ms
        counter++;
    }


    siren(dot,&redLED);
    siren(dot,&redLED;
    siren(dot,&redLED);
    siren(dash,&amberLED);
    siren(dash,&amberLED);
    siren(dash,&amberLED);
    siren(dot,&greenLED);
    siren(dot,&greenLED);
    siren(dot,&greenLED);



    //        while(counter<3){
    //     siren("dot",&greenLED);
    //     siren("dot",&redLED);
    //   siren("dot",&amberLED);
    //     siren("dash",&greenLED);
    //     playScale("G",&redLED);
    //     playScale("A",&amberLED);
    //     playScale("B",&greenLED);
    //     playScale("C",&redLED);  
    // }

    

    





        // greenLED = 1;
        // buzz.playTone("C");
        // wait_us(WAIT_TIME_MS * 1000);  //500ms


        // //Off for 500ms
        // greenLED = 0;
        // buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        // wait_us(WAIT_TIME_MS * 1000);  //500ms

        // //Pause
        //// buzz.rest();
        // wait_us(WAIT_TIME_MS * 1000);

    

    
}






