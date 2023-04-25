#include <stdio.h>
#include <unistd.h>

int main()
{
    short a;
    printf("Hello World!\n"); //prints any text.
    sleep(2);
    printf("This is an introduction to the C Language\a\n");
    printf("char can contain symbols and numbers in a range of -127 to 128\n");
    a = 32000;
    printf("%i", a);
    getchar();
    return 0;
}