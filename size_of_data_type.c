// sizeof() is a unary operator and it is not a function.
// we use this function to know the size of any data type.

#include <stdio.h>
int main()
{
    printf("Short integer %d\n", sizeof(short int));
    printf("integer %d\n", sizeof(int));
    printf("long integer %d\n", sizeof(long int));

    return 0;
}