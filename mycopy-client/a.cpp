#include<assert.h>

#include "copy.h"

int main() {

    //Assignment4 problem 1 
    int a[7], b[] = { 10, 20, 30, 40, 50, 60, 70 };
    int len = sizeof(a) / sizeof(int);
    copy(a, b, len);
    for (int i = 0; i < len; ++i) {
        assert(a[i] == b[i]);
    }
    
    //Asssignment4 Problem2
    int arr_replace[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    int len_replace = sizeof(arr_replace) / sizeof(int);
    int oldvalue = 20, newvalue = 99;
    replace(arr_replace, len_replace, oldvalue, newvalue);
    // post execution of replace function
    // the old value shouldn't exist
    // in an array
    for (int i = 0; i < len_replace; ++i) {
        assert(arr_replace[i] != oldvalue);
    }

    //Assignment 4 Problem3

        int arr_sort[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
        int len_sort = sizeof(arr_sort) / sizeof(int);
        sort(arr_sort, len_sort);
        // post execution of sort function
        // content of an array would be in
        // ascending order
        for (int i = 1; i < len_sort; ++i) {
            assert(arr_sort[i - 1] <= arr_sort[i]);
        }
    
    //Assignment4 Problem4 

     
            int arr_union[] = { 5, 10, 15, 20, 25 }, b_union[] = { 50, 40, 30, 20, 10 };
            const int arr_union_len = sizeof(arr_union) / sizeof(int);
            const int b_union_len = sizeof(b_union) / sizeof(int);
            int c_union[arr_union_len + b_union_len] = { 0 };
            sort(arr_union, arr_union_len);
            sort(b_union, b_union_len);
            int len_union = set_union(arr_union, arr_union_len, b_union, b_union_len, c_union);
            // post execution of set_union function
            // contents of two adjacent elements
            // will not be same
            for (int i = 1; i < len_union; ++i) {
                assert(c_union[i - 1] != c_union[i]);
            }
        

    //Assignment 4 Problem 5

           bool isequal = false;

           int arr_equal[] = { 3, 2, 4, 6, 7 };
           int b_equal[] = { 3, 2, 4, 6, 7 };
           isequal = equal(arr_equal, 5, b_equal, 5);
           assert(isequal);

           int c_equal[] = { 0, 9, 1, 2, 5 };
           isequal = equal(b_equal, 5, c_equal, 5);
           assert(!isequal);
           int d_equal[] = { 3, 2, 4, 6 };
           isequal = equal(c_equal, 5, d_equal, 4);
           assert(!isequal);


    //Assignment4 Problem 6.


}
