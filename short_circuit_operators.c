/*

Concept f short circuit in logical operators:-
----------------------------------------------

Short circuit in case of && (logical and operator):-
----------------------------------------------------
It simply means that if there is a condition anywhere in the expression that returns false, then the rest
of the conditions after that will not be evaluated.

Short circuit in case of || (logical or operator):-
---------------------------------------------------
It simply means that if there is a condition anywhere in the expression that returns Ture, then the rest
of the conditions after that will not be evaluated.

*/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 1;
    b = 1;
    c = ++a || b++;
    d = b-- && --a;
    printf("%d %d %d %d", d, c, b, a);
    return 0;
}