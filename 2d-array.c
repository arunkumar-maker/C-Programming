// This program print the row sum and column sum of a 5*5 array.

#include<stdio.h>
int main(){
    int i,j,r_sum,c_sum;
    int a[5][5];
    printf("Enter elements of matrix: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Row sum : \n");
    for(i=0;i<5;i++){
        r_sum=0;
        for(j=0;j<5;j++){
            r_sum=r_sum+a[i][j];
        }
        printf("%d ",r_sum);
    }

    printf("\nColumn sum : \n");
    for(j=0;j<5;j++){
        c_sum=0;
        for(i=0;i<5;i++){
            c_sum=c_sum+a[i][j];
        }
        printf("%d ",c_sum);
    }
}