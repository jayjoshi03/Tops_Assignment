// Write a program to sort the array of 5 elements.

#include <stdio.h>
void main()
{
    int a[5] = {2, 3, 5, 4, 1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}