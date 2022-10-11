/*Pattern:
    1
   2 3
  4 5 6
 7 8 9 10
 */

#include <stdio.h>
void main()
{
    int a = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}