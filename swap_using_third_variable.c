#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a and b: \n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("New values of a and b are: \n %d and %d",a,b);
}