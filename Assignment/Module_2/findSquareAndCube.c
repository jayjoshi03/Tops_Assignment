/*Write a C program to make a square and cube of number*/
#include <stdio.h>
void main(){
    //Enter any Number and Find Square.
    int a,b,c;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b=a*a;
    c=a*a*a;
    printf("Number %d Square is: %d",a,b);
    printf("\nNumber %d Cube is: %d",a,c);
}