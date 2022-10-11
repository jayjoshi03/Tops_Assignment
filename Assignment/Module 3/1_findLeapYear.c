/*Write a C Program to check the given year is leap year or not.*/

#include <stdio.h>
void main()
{
    int a;
    printf("Enter Year: ");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0)
    {
        printf("%d is Leap Year!", a);
    }
    else
    {
        printf("%d is Not a Leap Year!", a);
    }
}