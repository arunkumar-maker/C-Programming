// Program to add two numbers without using a plus operator
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    while(b>0){
        a++;
        b--;
    }
    printf("Addition of two given numbers is %d",a);
}
*/
// program to add two numbers if one or both of the numbers are negative.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    if(b>0){
        while(b!=0){
            a++;
            b--;
        }
    }
    else if(b<0){
        while(b!=0){
            a--;
            b++;
        }
    }
    printf("Sum of a and b is %d",a);
}
