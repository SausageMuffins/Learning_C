#include <stdio.h>

int main() {
    int numbers[10];
    int average;

    /* populate the array */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* print the 7th number from the array, which has an index of 6 */
    printf("The 7th number in the array is %d", numbers[6]);

    average = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6]) / 7;

    printf("\nThe average of the numbers in the array is %d", average);

    // Multi-dimensional arrays
    char vowels[1][5] = {
        {'a', 'e', 'i', 'o', 'u'}
    };

    int numbers2[][3] = { // we can omit the first dimension
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // we can't print the entire array at once - solution: use a loop

}