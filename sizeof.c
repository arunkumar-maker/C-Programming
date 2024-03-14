#include<stdio.h>
int main(){
    int a[]={1,2,3,6,54,7,8,9,9,6,4,15,2,4,25,52,5,66,3,6,665,58,2,1,41,5256,6,9,6,5,5,98,8,865,6,8,74,414,4,
    77,7,4,4,77,8,8,8,8,9,9,9,5,5,2,41,7,8,9,6,3,5,7,4,4};
    int no_of_elements;
    no_of_elements=sizeof(a)/sizeof(a[0]);
    printf("No of elements in the array are: %d",no_of_elements);
}