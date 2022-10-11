/*
Write a Program of find the element of given position from the array.
*/

#include <stdio.h>
void main(){
    int a[5],no,c,k=0;
    printf("Enter a 5 Number of elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nPlease Enter the Search Element: ");
    scanf("%d",&no);

    for (int j = 0; j < 5; j++)
    {
        k++;
        if (a[j]==no)
        {
            c=1;
            break;
        }
    }
    if (c==1){
        printf("We found the Search Element %d at Position %d ",no, k);
        }
    else{
        printf("\n Sorry!! We haven't found the the Search Element %d ",no);
    }
}