#include <stdio.h>
int main()
{
    int a = 2, b = 5, c = 1, d = 7;
    printf("a+b = %d\n", a + b);
    printf("d/c=%d\n", d / c);
    printf("a*b=%d\n", a * b);
    printf("d-a=%d\n", d - a);
    printf("a*b/c=%d\n", a * b / c);              // since multiplication and division comes under same associativity the order of left to right was followed.
    printf("a+b-c=%d\n", a + b - c);              // same as above
    printf("a+b*d-c%%a=%d\n", a + b * d - c % a); // since the mul, div, and mod have the highest precedence, they were evaluated first and then moved to add and sub.
    return 0;
}