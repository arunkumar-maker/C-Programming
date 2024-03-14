#include <stdio.h>
int main()
{
    char gender;
    float salary, bonus;
    printf("Enter your gender: ");
    scanf("%c", &gender);
    printf("Enter your salary: ");
    scanf("%f", &salary);

    if ((gender == 'm') || (gender == 'M'))
    {
        if (salary > 10000)
        {
            bonus = (float)(salary * 0.05);
        }
        else
        {
            bonus = (float)(salary * 0.07);
        }
    }
    if ((gender == 'f') || (gender == 'F'))
    {
        if (salary > 10000)
        {
            bonus = (float)(salary * 0.1);
        }
        else
        {
            bonus = (float)(salary * 0.12);
        }
    }
    salary = salary + bonus;
    printf("bonus: %f", bonus);
    printf("salary: %f", salary);
}