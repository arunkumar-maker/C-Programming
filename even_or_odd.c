#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is an even number\n", a[i]);
        }
        else
        {
            printf("%d is an odd number\n", a[i]);
        }
    }
    return 0;
}
