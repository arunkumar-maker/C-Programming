// write a program which allows the user to enter an integer until he enters zero(0)
#include <stdio.h>
int main()
{
    int i;
    do
    {
        printf("Enter an integer: \n");
        scanf("%d", &i);
    } while (i != 0);
    if (i == 0)
    {
        printf("You are out of loop!!!");
    }
}