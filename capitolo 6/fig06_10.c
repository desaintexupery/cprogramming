// Fig. 6.10: fig06_10.c
// Trattare gli array di caratteri come stringhe.
#include <stdio.h>
#define SIZE 20

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    char string1[SIZE]; // riserva 20 caratteri
    char string2[] = "string literal"; // riserva 15 caratteri

    // memorizza la stringa inserita dall'utente nell'array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1); // leggi non più di 19 caratteri

    // stampa le stringhe
    printf("string1 is: %s\nstring2 is: %s\nstring1 with spaces between characters is:\n", string1, string2);

    // stampa i caratteri finché non si raggiunge il carattere nullo
    for(size_t i = 0; i < SIZE && string1[i] != '\0'; ++i){
        printf("%c ", string1[i]);
    }

    puts("");
}