// Fig. 6.5: fig06_05.c
// Inizializza gli elementi dell'array s con gli interi pari da 2 a 10.
#include <stdio.h>
#define SIZE 5 // dimensione dell'array

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // la costante simbolica SIZE specifica la dimensione dell'array
    int s[SIZE]; // l'array s ha un numero di elementi uguale a SIZE

    for(size_t j = 0; j < SIZE; ++j){ // imposta i valori
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    // invia in uscita i contenuti dell'array s in formato tabellare
    for(size_t j = 0; j < SIZE; ++j){
        printf("%7u%13d\n", j, s[j]);
    }
}