#include <assert.h>

// If difference between two real numbers is less than E
// it will be assumed that both real numbers are the same.
#define E 0.0100

class MeterConverter {
public:
    MeterConverter(int i):m_meter(i){}

public:
    double ToFoot() const {
        return 3.28084 * m_meter;
    }
    double ToInch() const {
        return 39.3701 * m_meter;
    }
    int ToMeter() const {
        return m_meter;
    }
    double ToYard() const {
        return 1.09361 * m_meter;
    }

private:
    int m_meter;
};

int main() {
    MeterConverter meterConverter(10);

    // Following test case checks conversion functions
    assert((meterConverter.ToFoot() - 32.8084) < E);
    assert((meterConverter.ToInch() - 393.701) < E);
    assert(meterConverter.ToMeter() == 10);
    assert((meterConverter.ToYard() - 10.9361) < E);
}
