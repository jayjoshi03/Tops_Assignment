/*Write a C program to print the number in reverse order.*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter a Number and Convert to Reverse Order: ");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        printf("%d", b);
    }
}