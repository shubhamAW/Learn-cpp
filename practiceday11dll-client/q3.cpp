#include<assert.h>

/* run perfectly fine*/
enum SwitchState {
    OffState,
    OnState
};

class Lamp {
public:
    Lamp(): m_switchState(OffState) { } 

    void SwitchOn() {
        m_switchState = OnState;
    }
    void SwitchOff() {
        m_switchState = OffState;
    }

public:
    SwitchState GetState() const {
        return m_switchState;
    }

private:
    SwitchState m_switchState;
};

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
