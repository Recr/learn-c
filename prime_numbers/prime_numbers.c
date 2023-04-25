#include <stdio.h>

int main(){

 int x, y, z = 1, w = 2;
 printf("Type the range to verify the primes: ");
 scanf("%i", &x);
 if(x < 2)
  {
    printf("There's no primes in this range");
  }
 else
  {
    for(w = 2; w < (x + 1); w ++)
     {

      for(y = 2; y < (w + 1); y ++)
       {
        if(w % y == 0)
         {
          z++;
         }

        if(z > 2)
         {
          z = 1;
          break;
         }
      
       }

      if(z == 2)
       {
        printf("%i\n", w);
        z = 1;
       }
      
      
     }  
  }
 
getch();

}
