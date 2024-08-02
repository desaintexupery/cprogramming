// Fig. 09_22: fig09_22.c
// Uso di un insieme di scansione invertito
#include <stdio.h>

int main(void)
{
    char z[9]; 

    printf("%s", "Enter a string: ");
    scanf("%8[^aeiou]", z); // cerca un insieme di caratteri

    printf("The input was \"%s\"\n", z);
}