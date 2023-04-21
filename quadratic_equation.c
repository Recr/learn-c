#include <stdio.h>
#include <unistd.h>

int main()
{

    float a, b, c, x1, x2; 

    printf("This program returns the values of x of a quadratic equation.\n");
    sleep(2);
    printf("Note that if the value of \'a\' is equal to 0, it's not a quadratic equation.\n");
    sleep(2);

    printf("Insert the value of \'a\'\n");
    scanf("%f", &a);
    printf("Insert the value of \'b\'\n");
    scanf("%f", &b);
    printf("Insert the value of \'c\'\n");
    scanf("%f", &c);

    if(a != 0)
     {

     }
    else
     {
        printf("This is not a quadratic equation");
     } 
}