/*Write a C program to find the simple Interest & Compound Interest.*/
#include <stdio.h>
#include <math.h>
void main(){
    //Find Simple and Compound Interest.
    float p,r,t,si,co;
    printf("Enter Your Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest: ");
    scanf("%f",&r);
    printf("Enter Time in Years: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interest of Your Amount: %f",si);
    co = p*((pow((1+r/100),t)));
    printf("\nCompound Interest of Your Amount: %f",co);
}