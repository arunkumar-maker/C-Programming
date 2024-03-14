
#include <stdio.h>

int fact(int p)
{
    if (p <= 0)
    {
        return 1;
    }
    else
    {
        int t = 1;
        for (int i = 1; i <= p; i++)
        {
            t = t * i;
        }
        return t;
    }
}

int main()
{
    int n, digit, f, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        digit = n % 10;
        f = fact(digit);
        sum = sum + f;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("This is a strong number");
    }
    else
    {
        printf("This is not a strong number");
    }
}
/*
#include<stdio.h>
int main(){
    int n,temp,digit,f=1;
    int result=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        for(int i=1;i<=digit;i++){
            f=f*i;
        }
        result=result+f;
        f=1;
        n=n/10;
    }
    if(result==temp){
        printf("%d is a strong number!",temp);
    }
    else{
        printf("%d is not a strong number!",temp);
    }
}
*/
