#include<stdio.h>
int main(){
    int n,i,b_sum=0,g_sum=0;
    char gen;
    scanf("%d",&n);
    int marks[n];
    //printf("Enter marks");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    
    //printf("Enter gen");
    scanf(" %c",&gen);

    if(gen=='b'){
        for(i=0;i<n;i++){
            if((i%2)==0){
                b_sum=b_sum+marks[i];
            }
        }
        printf("%d",b_sum);
    }
    else if(gen=='g'){
        for(i=0;i<n;i++){
            if((i%2)!=0){
                g_sum=g_sum+marks[i];
            }
        }
        printf("%d",g_sum);
    }
}