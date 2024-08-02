// Fig. 7.11: fig07_11.c
// Stampa di una stringa un carattere alla volta usando
// un puntatore non costante a dati costanti.

#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void)
{
    // inizializza l'array di caratteri
    char string[] = "print characters of a string";

    puts("The string is:");
    printCharacters(string);
    puts("");
}

// sPtr non può modificare il carattere al quale punta,
// cioè, sPtr è un puntatore di "sola lettura"
void printCharacters(const char *sPtr)
{
    // effettua un ciclo lungo l'intera stringa
    for(; *sPtr != '\0'; ++sPtr){ // nessuna inizializzazione
        printf("%c", *sPtr);
    }
}