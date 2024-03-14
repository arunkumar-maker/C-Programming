#include<stdio.h>
int main(){
    int days,y,w;
    printf("Enter days: ");
    scanf("%d",&days);
    y=days/365;
    days=days%365;
    w=days/7;
    days=days%7;
    printf("Years=%d\n",y);
    printf("Weeks=%d\n",w);
    printf("Days=%d\n",days);


}