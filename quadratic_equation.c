#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main()
{

    float a, b, c, delta, x1, x2; 

    printf("This program returns the values of x of a quadratic equation.\n");
    sleep(3);
    printf("Note that if the value of \'a\' is equal to 0, it's not a quadratic equation.\n");
    sleep(3);

    printf("\nInsert the value of \'a\': ");
    scanf("%f", &a);
    printf("\nInsert the value of \'b\': ");
    scanf("%f", &b);
    printf("\nInsert the value of \'c\': ");
    scanf("%f", &c);

    if(a != 0)
     {
        delta = pow(b, 2) - (4 * a * c);

        if(delta >= 0)
         {
            x1 = (- b + sqrt(delta))/ (2*a);
            x2 = (- b - sqrt(delta))/ (2*a);
            sleep(2);

            if(x1 == x2)
             {
                printf("\n\nThere's one root for this equation.\n");
                sleep(2);
                printf("The value of x is: %.4f \n", x1);
             }
            else
             {
                printf("\n\nThere's two roots for this equation.\n");
                sleep(2);
                printf("The value of x1 is: %.4f\nThe value of x2 is: %.4f", x1, x2);
             } 
         }
        else
         {
            sleep(2);
            printf("\n\nThere's no value for x in the set of real numbers.");
         } 
     }
    else
     {
        printf("\n\nThis is not a quadratic equation");
     } 

   getch();

  return 0;
}