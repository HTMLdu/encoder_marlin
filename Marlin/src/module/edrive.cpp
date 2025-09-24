#include "edrive.h"

void edrive::enstepx(bool STATE)
{
    rp2040.fifo.push_nb(STATE);

}

void edrive::enstepy(bool STATE)
{
    

}
void setup1(){
    pinMode(X_DRIVE_1, OUTPUT);
    pinMode(X_DRIVE_2, OUTPUT);
    pinMode(Y_DRIVE_2, OUTPUT);
    pinMode(Y_DRIVE_2, OUTPUT);

}

void loop1(){


}