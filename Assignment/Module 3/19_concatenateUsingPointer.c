// Write a program to concatenate the two string using pointer.

#include <stdio.h>
#include <string.h>
 
void main()
{
  char a[100], b[100], *p, *q;

  //ask the user to enter two strings
  printf("Enter the first string: ");
  gets(a);
  printf("Enter the second string: ");
  gets(b);

  p = a;
  q = b;
  
  while(*p!='\0'){
    p++;
    }

  while(*q!='\0')
  {
    *p=*q;
    q++;
    p++;
  }
  *p='\0';

  printf("After the concatenation: %s ",a);
}