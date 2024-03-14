#include<stdio.h>
int main(){
    int a=0,b=1,c;
    int i,num;
    printf("Enter a number to get fibonacci numbers till this number: ");
    scanf("%d",&num);
    printf("Fibonacci Series: \n");
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=1;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
        
        if(c>=num){
            break;
        }
        printf("%d\n",c);
    }
}