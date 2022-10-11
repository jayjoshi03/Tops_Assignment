// Write a program to find out the factorial of given number using function.
#include<stdio.h>
#include<math.h>
int fact()
{
    int fact=1,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ",fact());
}
