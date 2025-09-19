#include "RP2040/fastio.h"
#include "multicore.h"

class edrive
{
private:
    bool xdirection;
public:
    #define ENDIR_X(DIR)      xdirection=DIR
    #define ENSTEP_X(STATE)   enstepx(STATE)
    #define ENDIRREAD_X       xdirection;
    #define ENSTEPREAD_X      //Add step pin state
    void enstepx(bool STATE);
    void enstepy(bool STATE);
};




