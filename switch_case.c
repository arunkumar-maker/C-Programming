#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("%d. Today is MONDAY", a);
        break;
    case 2:
        printf("%d. Today is TUESDAY", a);
        break;
    case 3:
        printf("%d. Today is WEDNESDAY", a);
        break;
    case 4:
        printf("%d. Today is THURSDAY", a);
        break;
    case 5:
        printf("%d. Today is FRIDAY", a);
        break;
    case 6:
        printf("%d. Today is SATURDAY", a);
        break;

    default:
        printf("Today is SUNDAY");
        break;
    }
}