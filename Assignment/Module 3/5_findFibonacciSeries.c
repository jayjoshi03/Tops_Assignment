/*Write a C program you have to print the Fibonacci series up to user given number*/

#include <stdio.h>
void main()
{
    int a, b, n, x;
    printf("Enter To Start two number Fibonacci series!");
    printf("\nEnter To First number: ");
    scanf("%d", &a);
    printf("Enter To Secound number: ");
    scanf("%d", &b);
    printf("Enter for How many Fibonacci series numbers: ");
    scanf("%d", &n);
    printf("\nFibonacci series number: %d,%d,", a, b);
    for (int i = 0; i < n - 2; i++)
    {
        x = a + b;
        a = b;
        b = x;
        printf("%d,", x);
    }
}