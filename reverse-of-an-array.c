#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Orininal order of numbers:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("Reverse order of numbers: \n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}