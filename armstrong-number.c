#include <stdio.h>
#include <math.h>
int length(int num)
{
    int ln = 0;
    while (num > 0)
    {
        ln++;
        num = num / 10;
    }
    return ln;
}

int main()
{
    int n, digit, len, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    len = length(n);

    while (temp > 0)
    {
        digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= len; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("This is an Armstrong number!");
    }
    else
    {
        printf("This is not an Armstrong number!");
    }
}