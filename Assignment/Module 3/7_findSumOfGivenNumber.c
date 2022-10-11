/*Write a C program make a summation of given number (E.g. 1523 ans :-11)*/

#include <stdio.h>
void main()
{
    int a, b, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        sum += b;
    }
    printf("Total Sum of Your Number: %d", sum);
}