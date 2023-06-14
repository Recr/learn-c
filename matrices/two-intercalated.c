#include <stdio.h>

int main(){

int A[10], B[10], AB[20], cont, ind;

for(cont = 0; cont < 10; cont++){
    printf("Type number %i of matrix A: ", cont+1);
    scanf("%i", &A[cont]);
}

for(cont = 0; cont < 10; cont++){
    printf("Type number %i of matrix B: ", cont+1);
    scanf("%i", &B[cont]);
}


for(cont = 0; cont < 10; cont++){
    AB[ind] = A[cont];
    ind += 1;
    AB[ind] = B[cont];   
    ind += 1; 
}


for(cont = 0; cont < 20; cont++){
    printf("\n%i\n", AB[cont]); 
}

}