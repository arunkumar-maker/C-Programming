#include<stdio.h>

int fact(int p){
    if(p==1){
        return 1;
    }
    else{
        return p*fact(p-1);
    }
}
int main(){
    int n,f;
    printf(" Enter a number: ");
    scanf("%d",&n);
    f=fact(n); 
    printf("Factorial of %d is %d",n,f);
}