// by default the declaration will take signed integer, so we didn't declare explicitly.

#include<stdio.h>
#include<limits.h>
int main()
{
    int var1 = INT_MIN;
    int var2=INT_MAX;
    printf("The minimum and maximum values of signed integer id %d and %d respectively.",var1,var2);
    return 0;
}