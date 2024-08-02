// Fig. 09_23: fig09_23.c
// Lettura di dati con una larghezza di campo
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("%s", "Enter a six digit integer: ");
    scanf("%2d%d", &x, &y);

    printf("The integers input were %d and %d\n", x, y);
}