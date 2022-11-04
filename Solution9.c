// Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>

int ContainsOrNot(int num,int n){
    int temp=num,result;
    while(temp)
    {
        int rem=temp%10;
        if(rem==n){
            result=1;
            break;
        }
        else{
            temp/=10;
            result=0;
        }
    }
    return result;
}