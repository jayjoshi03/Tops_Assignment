// Write a program to print the Fibonacci series using function

#include <stdio.h>
#include<math.h>
int fibo()
{
    int x=0,y=1;
    int fibo,n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        fibo = x+y;
        x=y;
        y=fibo;
        printf("%d,",fibo);
    }
}
void main(){
    printf("Enter a Number to Find How many element Fibonacci: ");
    fibo();
}