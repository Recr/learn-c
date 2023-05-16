#include <stdio.h>                   //standard imput output
#include <string.h>

int main(){

char name[25];
int age;                             //creates a integer variable



printf("\nWhat's your name?\t");
fgets(name, 25, stdin);
name[strlen(name)-1] = '\0';           //removes the last character of fgets

printf("How old are you?\t");          //printf(""); displays something
scanf("%i", &age);                   //scanf(""); reads the user imput



/* % is a format identifier. It basically tells the program what kind of variable to read. 

%d or %i - decimal or signed integer
%f - signed floating point
%c - character
%s - array of characters (string)
%e - floating point number
%p - the addres of an variable
%h - the value converted to hexadecimal
%o - the value converted to octal   */

printf("Hello %s!", name);
printf("\nYou are %d years old.\n", age);


}