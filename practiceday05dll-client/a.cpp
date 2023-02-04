#include <iostream>
#include <assert.h>

#include "header.h"


int main() {

    ////1
 
    //int a[] = { 1, 2, 3, 4, 5, 3 };
    //int result = 0;

    //result = search(a, 6, 3);
    //assert(result == 2);

    //result = search(a, 6, 3, 2);
    //assert(result == 5);

    //result = search(a, 4, 3);
    //assert(result == 2);

    //result = search(a, 6, 7);
    //assert(result == -1);

    //3
   
    //int res;
    //res = dow(12, 9, 2020);
    //assert(res == 6);


    ////5
    //int n = 123;
    //int result = summation(n);
    //assert(result == 6);

    //6
    enum SortOrder { Ascending, Descending };
    int a[]{ 6, 4, 3, 8, 7, 9, 1, 0, 2, 5 };
    size_t size = sizeof(a) / sizeof(int);
    sort(a, size); // Sorts ascending by default
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }
    sort(a, size, Descending);
    for (size_t i = 0; i < size; --i) {
        assert(a[i] == 9 - i);
    }
    sort(a, size, Ascending);
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }


    ////7
    //result = 0;
    //result = length(12345);
    //assert(result == 5);

    ////8 
    //result = 0;
    //result = fibonacci(12);
    //assert(result == 144);

    ////9 
    //bool palin = true;
    //result = palindrome(12321);
    //assert(palin);


    ////10
    //int arr[] = { 1,4,45,6,-20,10,2 };
    //n = sizeof(arr) / sizeof(int);

    //result=findMax(arr, n);
    //assert(result == 45);


}

