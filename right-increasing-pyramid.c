/*
Increasing pattern : 1 to i
Decreasing pattern : i to n
*/
#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}