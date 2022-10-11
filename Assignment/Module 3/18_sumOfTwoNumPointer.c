// Write program to make a addition of two number using pointer

#include <stdio.h>
void main(){
int first, second, *p, *q, sum;
    
    printf("Enter two Number to add\n");
    printf("A=");
    scanf("%d", &first);
    printf("B=");
    scanf("%d", &second);
    
    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("Sum of A+B = %d\n",sum);
}