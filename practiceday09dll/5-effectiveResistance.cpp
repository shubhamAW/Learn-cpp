#include"Header.h"

double EffectiveSeriesResistance(Resistor* r[], int n) {
    double seriesResistance = 0;
    for (int i = 0;i < n;i++) {
        seriesResistance += r[i]->resistance;
    }

    return seriesResistance;
}

double EffectiveParallelResistance(Resistor* r[], int n) {
    double parallelResistance = 0, sum = 0, multiply = 1;
    for (int i = 0;i < n;i++) {
        sum += r[i]->resistance;
        multiply *= r[i]->resistance;
    }

    parallelResistance = multiply / sum;

    return parallelResistance;


}