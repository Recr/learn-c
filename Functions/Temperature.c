#include <stdio.h>
#include <ctype.h>

int main(){

char unit;
double temp;

printf("\nWhich unit system is the temperature?\n");
printf("\nType c for Celsius, f for Fahrenheit or k for Kelvin: ");
scanf("%c", &unit);
printf("\nWhat's the current temperature? ");
scanf("%lf", &temp);

unit = toupper(unit);

if(unit == 'C')
{
 printf("\nThe current temperature in Celsius is: %.2lf", temp);
 printf("\nThe current temperature in Kelvin is: %.2lf", temp + 273.15);
 printf("\nThe current temperature in Fahrenheit is: %.2lf", (temp * 9/5) + 32);
}
else if (unit == 'F')
{
 printf("\nThe current temperature in Fahrenheit is: %.2lf", temp);
 printf("\nThe current temperature in Kelvin is: %.2lf", (temp - 32) * 5/9 + 273.15);
 printf("\nThe current temperature in Celsius is: %.2lf", (temp - 32) * 5/9);
}
else if(unit == 'K')
{
 printf("\nThe current temperature in Kelvin is: %.2lf", temp);
 printf("\nThe current temperature in Celsius is: %.2lf", temp - 273.15);
 printf("\nThe current temperature in Fahrenheit is: %.2lf", (temp - 273.15) * 9/5 + 32);
}
else
{
 printf("\n%c Is not a valid unit.", unit);   
}

}