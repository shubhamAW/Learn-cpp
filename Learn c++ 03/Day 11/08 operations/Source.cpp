#include<assert.h>
#include "Lamp.h"

int main() {
    Lamp tableLamp;

    // Following test case checks
    // - If lamp is turned on.
    tableLamp.SwitchOn();
    assert(tableLamp.GetState() == OnState);

    // Following test case checks:
    // - What happens when SwitchOn is called again on
    //   the already switched on table lamp.
    
    tableLamp.SwitchOn();
    assert(tableLamp.GetState() == OnState);

    // Following test case checks
    // - If lamp is turned off.
    tableLamp.SwitchOff();
    assert(tableLamp.GetState() == OffState);

    // Following test case checks:
    // - What happens when SwitchOff is called again on
    //   the already switched off table lamp.
   
   tableLamp.SwitchOff();
   assert(tableLamp.GetState() == OffState);
}


/*
* 
* 1. Avoid user interactivity from methods when it is not expected..
* 2. Delete unWanted comments. 
* 3. enum / class / struct name shoud be in Pascal case
* 4. enumaration constant listed verticaly down
        enumaration constant order matters and shoud be done logically data members and parameters written in camel case
* 5. be consistant throghout programming
  6. avoid user interactivity from methods when it is not expected
  7. delete unwanted comment / code
  8. don't write unwanted pre-condition
*/