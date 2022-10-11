/*Write a C Program to check the given number is prime or not prime.*/

#include <stdio.h>
void main()
{
    int a, b, c = 0;
    printf("Enter a Natural number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a Prime number!", a);
    }
    else
    {
        printf("%d is a Not Prime number!", a);
    }
}