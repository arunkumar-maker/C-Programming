#include <stdio.h>
int main()
{
    int a, b, sum, carry;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    { // here we are using this while loop and iterating till it is != zero as we are assigning the carry to b.
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    printf("Sum of two numbers is %d", sum);
}