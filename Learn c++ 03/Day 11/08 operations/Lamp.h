#pragma once

enum SwitchState {
    OffState,
    OnState,
};

class Lamp {
private:
    SwitchState m_LampState; //Data member.

public:
    //Default Constructor..
    Lamp();

public:
    void SwitchOn();

    void SwitchOff();

public:
    SwitchState GetState();

};
