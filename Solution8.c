// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

int Arrangements(int n,int r){
    int temp=n;
    int arrngmnt=1;
    while(temp>(n-r)){
        arrngmnt*=temp;
        temp--;
    }
    return arrngmnt;
}