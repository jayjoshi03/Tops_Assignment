/*Write a C program user enter the 5 subjects mark. You have to make a total
and find the percentage.
percentage > 75 you have to print “Distinction”
percentage > 60 and percentage <= 75 you have to print “First class”
percentage >50 and percentage <= 60 you have to print “Second class”
percentage > 35 and percentage <= 50 you have to print “Pass class”
Otherwise print “Fail” */

#include <stdio.h>
void main()
{
    int a, b, c, d, e, per;
    printf("Enter Student English Marks: ");
    scanf("%d", &a);
    printf("Enter Student Hindi Marks: ");
    scanf("%d", &b);
    printf("Enter Student Gujarati Marks:");
    scanf("%d", &c);
    printf("Enter Student Computer Marks: ");
    scanf("%d", &d);
    printf("Enter Student Sanskrit Marks: ");
    scanf("%d", &e);
    per = (a + b + c + d + e) / 5;
    printf("Student percentage is %d", per);
    if (per > 75)
    {
        printf("\nDistinction!");
    }
    else if (per > 60 && per <= 75)
    {
        printf("\nFirst Class!");
    }
    else if (per > 50 && per <= 60)
    {
        printf("\nSecond Class!");
    }
    else if (per > 35 && per <= 50)
    {
        printf("\nPass Class!");
    }
    else
    {
        printf("\nFail!");
    }
}