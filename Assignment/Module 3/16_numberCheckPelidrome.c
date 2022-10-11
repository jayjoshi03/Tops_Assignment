// Write a Program of Print a number and check the number is palindrome or not using recursive Function

#include <stdio.h>
void main(){
    int a,b,no,same=0;
    printf("Enter an integer: ");
    scanf("%d", &a);
    no=a;
    while (a != 0)
        {
            b = a % 10;
            same = same * 10 + b;
            a = a / 10;
        }
        if (no == same){
        printf("%d is a palindrome.", no);
        }
        else{
        printf("%d is not a palindrome.", no);}
}