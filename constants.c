/*
Constants can be defined in two ways, they are using #define and using const
*/

// we can usee NAME like functions
/*
#include<stdio.h>
#define add(x,y) x+y
int main()
{
    printf("Addition of two numbers is: %d",add(4,6));
    return 0;
}
*/

// we can use the #define keyword to write multiple lines.
/*
#include<stdio.h>
#define greater(x,y) if(x>y)\
                    printf("%d is greater than %d",x,y);\
                    else\
                    printf("%d is lesser than %d",x,y);
int main()
{
    greater(6,7);
    return 0;
}
*/

// we can use this #define keyword for performing mathematical operation a//c to BODMAS
// First expression then evaluation.
/*
#include<stdio.h>
#define add(x,y) x+y

int main()
{
    printf("result of expression a*b+c is %d",5*add(5,4));
    return 0;
}
*/

// there are few predefined macros as follows
/*
#include<stdio.h>
int main()
{
    printf("Date: %s\n",__DATE__);
    printf("Time: %s\n",__TIME__);
    return 0;
}

*/


/*
The syntax for using const keyword is 
const data_type variable_name;

After assigning a value to a variable using const keyword, we cannot change it again in that function.
*/

#include<stdio.h>
int main()
{
    const int var=67;
    int var=34;  // you cannot change the value of any variable after defining it as const.
    printf("The value of variable var is: %d",var);
    return 0;
}