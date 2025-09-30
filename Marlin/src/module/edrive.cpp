#include "edrive.h"
void XCHANGED(){
    digitalWrite(X_DRIVE_1, LOW);
    digitalWrite(X_DRIVE_2, LOW);
    xcurrent = digitalRead(X_ENCODE_PIN);

}
void YCHANGED(){
    digitalWrite(Y_DRIVE_1, LOW);
    digitalWrite(Y_DRIVE_2, LOW);
    ycurrent = digitalRead(Y_ENCODE_PIN);
}
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
    attachInterrupt(digitalPinToInterrupt(X_ENCODE_PIN), XCHANGED, CHANGE);
    attachInterrupt(digitalPinToInterrupt(Y_ENCODE_PIN), YCHANGED, CHANGE);
}

void loop1(){
    if (nystep != ycurrent){
        digitalWrite(Y_DRIVE_1, ydirection ? HIGH : LOW);
        digitalWrite(Y_DRIVE_2, ydirection ? LOW : HIGH);

    }
    if (nxstep != xcurrent){
        digitalWrite(X_DRIVE_1, xdirection ? HIGH : LOW);
        digitalWrite(X_DRIVE_2, xdirection ? LOW : HIGH);
    }
}

