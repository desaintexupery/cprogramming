// Fig 8.10: fig08_10.c
// Uso delle funzioni fgets e putchar
#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr); // prototipo

int main(void)
{
    char sentence[SIZE]; // crea un array di char

    puts("Enter a line of text: ");

    // usa fgets per leggere una riga di testo
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is: ");
    reverse(sentence);
}

// stampa ricorsivamente i caratteri della stringa in ordine inverso
void reverse(const char * const sPtr)
{
    // se si raggiunge la fine della stringa
    if('\0' == sPtr[0]){ // caso di base
        return;
    }
    else{
        reverse(&sPtr[1]); // passo di ricorsione
        putchar(sPtr[0]); // usa putchar per stampare il carattere
    }
}