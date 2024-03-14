/*
Increasing pattern : 1 to i
Decreasing pattern : i to n
*/

#include <stdio.h>
int main()
{
    int i, j, n = 5;
    // int count = 0;
    for (i = 1; i <= n; i++) // this for loop is for upper part of the diamond
    {
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        // count++;
        printf("\n");
    }
    for (i = 1; i <= n; i++) // this for loop is for the lower part of the diamond.
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i; j <= n - 1; j++)
        {
            printf("  ");
        }
        for (j = i; j <= n - 1; j++)
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