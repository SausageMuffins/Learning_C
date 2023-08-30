#include <stdio.h>

// this is a comment in C


float main() {
    // defining boolean - c does not have a boolean type
    #define BOOL char
    #define FALSE 0
    #define TRUE 1

    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum = a + b + c;

    /* Your code goes here */

    printf("The sum of a, b, and c is %f.", sum);
    return sum;
}

