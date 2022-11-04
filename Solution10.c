// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
#include <math.h>

int PrimeOrNot(int n){
    int count=0;
    if(n!=2&&n%2==0)
        return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
                break;
            }
        }
    }
    if(count==0)
        return 1;
    else
        return 0;
}

void PrintAllPrimeFactors(int num){
    int i=2;
    while(i<=num){
        if(PrimeOrNot(i)&&num%i==0){
            printf("%d ",i);
            num/=i;
        }
        else
            i++;
    }
}