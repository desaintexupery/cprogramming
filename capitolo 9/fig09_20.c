// Fig. 09_20: fig09_20.c
// Lettura di caratteri e stringhe
#include <stdio.h>

int main(void)
{
    char x;
    char y[9];

    printf("%s", "Enter a string: ");
    scanf("%c%8s", &x, y);

    puts("The input was:\n");
    printf("the character \"%c\" and the string \"%s\"\n", x, y);
}