// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

int GetFactorial(int n){
    int fact=1;
    while(n){
        fact=fact*n;
        n--;
    }
    return fact;
}