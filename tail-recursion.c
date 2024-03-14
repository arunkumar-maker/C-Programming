/*
This is a tail recursion as the function call is the last step in the function.
And also there are no steps after the function call in the function to perform an operation.
There is no need to keep a record of the previous state as it does not require to perform any operation.

*/

#include<stdio.h>
void fun(int n){
    if(n==0){
        return;
    }
    else{
        printf("%d",n);
    }
    return fun(n-1);
}

int main(){
    fun(3);
    return 0;
}