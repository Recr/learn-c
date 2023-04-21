#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main()
{

    float a, b, c, delta, x1, x2; 

    printf("This program returns the values of x of a quadratic equation.\n");
    sleep(3);
    printf("Note that if the value of \'a\' is equal to 0, it's not a quadratic equation\n");
    sleep(3);

    printf("Insert the value of \'a\'\n");
    scanf("%f", &a);
    printf("Insert the value of \'b\'\n");
    scanf("%f", &b);
    printf("Insert the value of \'c\'\n");
    scanf("%f", &c);

    if(a != 0)
     {
        delta = pow(b, 2) - (4 * a * c);

        if(delta >= 0)
         {
            x1 = (- b + sqrt(delta))/ (2*a);
            x2 = (- b - sqrt(delta))/ (2*a);

            if(x1 == x2)
             {
                printf("There's one root for this equation.\n");
                sleep(2);
                printf("The value of x is: %f \n", x1);
             }
            else
             {
                printf("There's two roots for this equation.\n");
                printf("The value of x1 is %f and the value of x2 is %f", x1, x2);
             } 
         }
        else
         {
            printf("There's no value for x in the set of real numbers");
         } 
     }
    else
     {
        printf("This is not a quadratic equation");
     } 

  return 0;
}