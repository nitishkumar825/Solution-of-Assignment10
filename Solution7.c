// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

int GetFactorial(int n){
    int fact=1;
    while(n){
        fact=fact*n;
        n--;
    }
    return fact;
}

int Combinations(int n,int r){
    int temp=n;
    int fact=1;
    while(temp>(n-r)){
        fact*=temp;
        temp--;
    }
    return fact/GetFactorial(r);
}