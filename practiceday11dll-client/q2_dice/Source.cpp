#include "Dice.h"
#include<assert.h>

int main()
{
    int value = 0;
    Dice redDice;

    int faceValues[100] = { 0 };
    for (int i = 0; i < 100; i++)
    {
        redDice.Roll();
        faceValues[i] = redDice.GetFaceValue();
    }

    int sameFaceValue = 0;
    for (int i = 1; i < 100; i++)
    {
        assert(faceValues[i - 1] >= 1 && faceValues[i - 1] <= 6);
        if (faceValues[i] == faceValues[i - 1])
            sameFaceValue++;
    }

    assert(sameFaceValue != 99);

    return 0;
}