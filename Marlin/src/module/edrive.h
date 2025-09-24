#include "RP2040/fastio.h"
//#include "pico/stdlib.h"
#include "pi_pico.h"
#include <Arduino.h>
bool xdirection;
bool ydirection;
class edrive
{
private:
    bool xdirection;
public:
    #define ENDIR_X(DIR)      xdirection=DIR //Set direction
    #define ENSTEP_X(STATE)   enstepx(STATE) //Send step state to function
    #define ENDIRREAD_X       xdirection;//Read direction
    #define ENSTEPREAD_X      //Add step pin state
    void enstepx(bool STATE); //Function to handle step signal
    void enstepy(bool STATE);//Function to handle step signal
    #define ENDIR_Y(DIR)      ydirection=DIR//Set direction
    #define ENSTEP_Y(STATE)   enstepx(STATE)//Send step state to function
    #define ENDIRREAD_Y       ydirection;//Read direction
    #define ENSTEPREAD_Y      //Add step pin state
};




