//swapping of two numbers without using temporary or third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping: %d and %d",a,b);
}