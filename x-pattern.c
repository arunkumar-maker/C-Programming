#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter no.of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if ((i == j) || (i + j == rows + 1) || (i==1) || (i==rows)||(j==1)||(j==rows))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}