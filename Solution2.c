// Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float SimpleInterest(int p,float r,float t){
    float i=p*r*t/100;
    return i;
}