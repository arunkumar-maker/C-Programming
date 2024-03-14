/*
#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=65;j<65+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}
*/
// OR

#include <stdio.h>
int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        int k = 65;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}