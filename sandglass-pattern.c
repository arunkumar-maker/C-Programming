#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(j=i;j<=n-1;j++){
            printf("* ");
        }
        for(j=i;j<=n;j++){
            printf("* ");   
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("  ");
        }
        for(j=1;j<=i-1;j++){
            printf("* ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}