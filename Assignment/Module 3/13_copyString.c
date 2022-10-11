// Write a program to copy string from one string to another string with user define function.

#include <stdio.h>
#include <string.h>
 
void stringcopy(char *a,char *b)
{
	int i;
    for(i=0;b[i]=a[i];i++);
    b[i]='\0';
}
void main()
{
    char a[100],b[100];
    printf("Enter any string: ");
    gets(a);
    stringcopy(a,b);
    printf("original string s1=%s\n",a);
    printf("copied string   s2=%s",b);
}