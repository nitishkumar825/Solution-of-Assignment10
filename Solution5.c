// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void PrintOddNaturalNumbers(int n){
    int i=1;
    do
    {
        printf("%d ",i);
        i+=2;
    } while (i<=2*n);
}