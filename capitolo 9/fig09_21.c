// Fig. 09_21: fig09_21.c
// Uso di un insieme di scansione
#include <stdio.h>

int main(void)
{
    char z[9]; // definisci l'array z

    printf("%s", "Enter a string: ");
    scanf("%8[aeiou]", z); // cerca un insieme di caratteri

    printf("The input was \"%s\"\n", z);
}