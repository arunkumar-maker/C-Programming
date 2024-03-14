// Here %20s makes the output that has to print to fit that width.
// here hello word has the length of 5 and we have %20s, so 20-5=15, it printed 15 spaces before it prints the word hello

#include <stdio.h>
int main()
{
    printf("%s\n", "Hello world");
    printf("%20s", "Hello");
    return 0;
}