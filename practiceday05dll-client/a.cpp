#include <iostream>
#include <assert.h>

#include "header.h"


int main() {

    ////Assignment 05 problem 1
    //int a[] = { 1, 2, 3, 4, 5, 3 };
    //int result = 0;

    //
    //result = search(a, 6, 3);
    //assert(result == 2);

    //result = search(a, 6, 3, 2);
    //assert(result == 5);

    //result = search(a, 4, 3);
    //assert(result == 2);

    //result = search(a, 6, 7);
    //assert(result == -1);

    //5
    int n = 123;
    int result = summation(n);
    assert(result == 6);

    //6


    //7
    result = 0;
    result = length(12345);
    assert(result == 5);

    //8 
    result = 0;
    result = fibonacci(12);
    assert(result == 144);

    //9 
    bool palin = true;
    result = palindrome(12321);
    assert(palin);

    result = palindrome(102);
    assert(!palin);

    //10



}

