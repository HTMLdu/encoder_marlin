#include "../HAL/RP2040/fastio.h"
//#include "pico/stdlib.h"
#include "../pins/rp2040/pi_pico.h"
#include <Arduino.h>
bool xdirection;
bool ydirection;
volatile bool nystep;
volatile bool nxstep;
volatile bool ycurrent;
volatile bool xcurrent;
class edrive
{
private:
    bool xdirection;
public:
    #define ENDIR_X(DIR)      xdirection=DIR //Set direction
    #define ENSTEP_X(STATE)   enstepx(STATE) //Send step state to function
    #define ENDIRREAD_X       xdirection;//Read direction
    #define ENSTEPREAD_X      xcurrent //Add step pin state
    void enstepx(bool STATE); //Function to handle step signal
    void enstepy(bool STATE);//Function to handle step signal
    #define ENDIR_Y(DIR)      ydirection=DIR//Set direction
    #define ENSTEP_Y(STATE)   enstepx(STATE)//Send step state to function
    #define ENDIRREAD_Y       ydirection;//Read direction
    #define ENSTEPREAD_Y      ycurrent //Add step pin state
};




