#include<stdio.h>
int main(){
    int binary,digit;
    int decimal=0,weight=1;
    int temp=binary;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    while(binary!=0){
        digit=binary%10;
        decimal=decimal+digit*weight;
        binary=binary/10;
        weight=weight*2;
    }
    printf("The decimal equivalent of the binary number %d is %d",temp,decimal);
}