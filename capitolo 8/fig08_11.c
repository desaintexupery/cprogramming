// Fig. 8.11: fig08_11.c
// Uso della funzione getchar.
#include <stdio.h>
#define SIZE 80

int main(void)
{
    int c; // variabile che contiene il carattere inserito dall'utente
    char sentence[SIZE]; // crea un array di char
    int i = 0; // inizializza il contatore i

    // richiedi all'utente di inserire una riga di testo
    puts("Enter a line of text:");

    // usa getchar per leggere ogni carattere
    while((i < SIZE - 1) && (c = getchar()) != '\n'){
        sentence[i++] = c;
    }

    sentence[i] = '\0'; // termina la stringa

    // usa puts per stampare la stringa
    puts("\nThe line entered was:");
    puts(sentence);
}