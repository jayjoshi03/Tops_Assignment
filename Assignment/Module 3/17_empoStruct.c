/*Write a program of structure for five employee that provides the following information 
print and display empno, empname, address and age*/

#include <stdio.h>
struct employee {
    int empno;
    char empname[100];
    char address[100];
    int age;
}e[5];

void main(){
    for(int i=0;i<5;i++){
    printf("Enter Employee Number:");
    scanf("%d",&e[i].empno);
    printf("Enter Employee Name:");
    scanf("%s",&e[i].empname);
    printf("Enter Employee Address:");
    scanf("%s",&e[i].address);
    printf("Enter Employee Age:");
    scanf("%d",&e[i].age);
    }
    for(int i=0;i<5;i++){
    printf("\nEmployee No.: %d",e[i].empno);
    printf("\nEmployee Name: %s",e[i].empname);
    printf("\nEmployee Address: %s",e[i].address);
    printf("\nEmployee Age: %d",e[i].age);
    }
}