/*
Write a program to find out the Max number from given Matrix
*/

#include <stdio.h>
void main(){
    int a[2][2],max,c,d;
    
    printf("Enter a Matrix Number:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    max = a[0][0];

    for (c = 0; c < 2; c++){
        for (d = 0; d < 2; d++){
            if (a[c][d] > max)
                 max = a[c][d];
        }
    }
    printf("Max Matrix Number is: %d",max);
    
}