/*
  Name: arrayHalf.c
  Author: Courtney Scrimshaw
  Function: take 10 float values to create an array that reverses and halves each value then prints out the array as well as the index of whole numbers
  Compilation: gcc -Wall -std=c99 -o arrayHalf arrayHalf.c 
  Execution: ./arrayHalf.c
  Dates: February 2nd 2024
*/

#include <stdio.h>

int main() {
    float array[10];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &array[i]);
    }

    printf("Here are the numbers halved and flipped: ");
    for (int i = 9; i >= 0; i--) {
        float halfValue = array[i] / 2.0;
        printf("%.2f ", halfValue);
    }

    printf("\nThe index to the whole numbers are: ");
    for (int i = 9; i >= 0; i--) {
        float halfValue = array[i] / 2.0;
        if (halfValue == (int)halfValue) {
            printf("%d ", 9-i);
        }
    }

    return 0;
}