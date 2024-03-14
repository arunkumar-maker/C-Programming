#include<stdio.h>
#include<limits.h>

int main()
{
    short unsigned int var1 = 0;
    short unsigned int var2 = USHRT_MAX;
    printf("The minimum and maximum values of unsigned short integer are %u and %u respectively.",var1, var2);
    return 0;
}