#include "edrive.h"
volatile bool nystep;
volatile bool nxstep;
bool ycurrent;
bool xcurrent;
void edrive::enstepx(bool STATE)
{
    nxstep=STATE;

}

void edrive::enstepy(bool STATE)
{
    nystep=STATE;

}
void setup1(){
    pinMode(X_DRIVE_1, OUTPUT);
    pinMode(X_DRIVE_2, OUTPUT);
    pinMode(Y_DRIVE_2, OUTPUT);
    pinMode(Y_DRIVE_2, OUTPUT);
    pinMode(X_ENCODE_PIN, INPUT);
    pinMode(Y_ENCODE_PIN, INPUT);
    attachInterrupt(digitalPinToAnalogIndex(X_ENCODE_PIN), XCHANGED, CHANGE);
    attachInterrupt(digitalPinToAnalogIndex(Y_ENCODE_PIN), YCHANGED, CHANGE);

}

void loop1(){
    if (nystep != ycurrent){
        digitalWrite(Y_DRIVE_1, ydirection ? HIGH : LOW);
        digitalWrite(X_DRIVE_2, ydirection ? LOW : HIGH);

    }
    if (nxstep != xcurrent){
        digitalWrite(X_DRIVE_1, xdirection ? HIGH : LOW);
        digitalWrite(X_DRIVE_2, xdirection ? LOW : HIGH);
    }
}

void XCHANGED(){


}
void YCHANGED(){

}