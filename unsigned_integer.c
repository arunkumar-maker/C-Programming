// for unsigned integer, we must declare it explicitly and the format specifier must be %u not %d.

#include<stdio.h>
#include<limits.h>

int main()
{
    unsigned int var1 = 0;
    unsigned int var2 = UINT_MAX;

    printf("The minimum and maximum values of unsigned integer are %u and %u respectively.",var1, var2);
    return 0;
}