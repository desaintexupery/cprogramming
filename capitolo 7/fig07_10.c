// Fig. 7.10: fig07_10.c
// Conversione di una stringa in maiuscolo usando un
// puntatore non costante a dati non costanti.
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // prototipo

int main(void)
{
    char string[] = "cHaRaCters and $32.98"; // inizializza l'array
    
    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);
}

void convertToUppercase(char *sPtr)
{
    while(*sPtr != '\0'){ // il carattere corrente non è '/0'
        *sPtr = toupper(*sPtr); // converti in maiuscolo
        ++sPtr; // fai puntare sPtr al carattere successivo
    }
}