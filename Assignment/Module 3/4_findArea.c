/*Write a C program of to find out the Area of
Triangle, Rectangle and Circle using Switch Case .(Must Be Menu Driven)*/

#define pi 3.142
#include <stdio.h>
void main()
{
    int a;
    float x, xCir;
    float w, l, aRect;
    float b, h, aTri;
    printf("Area of Circle Enter 1, Area of Rectangle Enter 2, and Area of Triangle Enter 3\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
        printf("Enter Redius Value Of Circle: ");
        scanf("%f", &x);
        xCir = pi * x * x;
        printf("\nArea Of Circle: %f", xCir);
        break;
    }

    case 2:
    {
        printf("\nEnter Length Value Of Rectangle: ");
        scanf("%f", &l);
        printf("\nEnter Width Value of Rectangle: ");
        scanf("%f", &w);
        aRect = w * l;
        printf("\nArea Of Rectangle: %f", aRect);
        break;
    }

    case 3:
    {
        printf("\nEnter Base Value of Triangle: ");
        scanf("%f", &b);
        printf("\nEnter Height Value of Triangle: ");
        scanf("%f", &h);
        aTri = (b * h) / 2;
        printf("\nArea Of Triangle: %f", aTri);
        break;
    }
    }
}