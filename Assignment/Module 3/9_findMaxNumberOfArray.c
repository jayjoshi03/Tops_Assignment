/*Write a C program to find out the max number from given 10 elements of array*/

#include <stdio.h>
void main()
{
    int temp;
    int a[10] = {2, 1, 3, 14, 1, 55, 6, 7, 84, 9};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Maximal number of elements is: %d", a[0]);
}