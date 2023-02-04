#include<assert.h>

#include"Header.h"
#include <crtdbg.h>

double EffectiveCircuitResistance(Circuit& pc) {

}

int main() {
    Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 4.0 }, r4{ 5.0 };
    Circuit* pc = new Circuit{ nullptr, 0, None, nullptr };
    pc->resistors = new Resistor*[2];
    pc->size = 2;
    pc->resistors[0] = &r1;
    pc->resistors[1] = &r2;
    pc->configuration = Series;
    pc->nextCircuit = new Circuit{ nullptr, 0, None, nullptr };
    Circuit* pc2 = pc->nextCircuit;
    pc2->resistors = new Resistor * [2];
    pc2->size = 2;
    pc2->resistors[0] = &r3;
    pc2->resistors[1] = &r4;
    pc2->configuration = Parallel;
    pc2->nextCircuit = nullptr;
    assert(r1.resistance >= 0 && r2.resistance >= 0);
    assert(r3.resistance >= 0 && r4.resistance >= 0);
    double resistance = EffectiveCircuitResistance(pc);
    // write dynamic object release code here
    // Check if dynamically allocated memory is released
    _CrtDumpMemoryLeaks();
}
