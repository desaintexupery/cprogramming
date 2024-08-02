// Fig. 8.6: fig08_06.c
// Uso della funzione strtod
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *string = "51.2% are admitted"; // inizializza string
    char *stringPtr; // crea un puntatore a char

    double d = strtod(string, &stringPtr);

    printf("The string \"%s\" is converted to the\n", string);
    printf("double value %.2f and the string \"%s\"\n", d, stringPtr);
}