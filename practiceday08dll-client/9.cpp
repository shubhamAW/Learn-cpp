#include <assert.h>
#include "Header.h"

int main() {
    int hh = 0, mm = 0, ss = 1432;
    convert(hh, mm, ss);
    assert(hh == 0 && mm == 23 && ss == 52);
}
