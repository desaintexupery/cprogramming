// Fig. 6.3: fig06_03.c
// Inizializzare gli elementi di un array a zero.
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    int n[5]; // n è un array di 5 interi

    // imposta gli elementi dell'array n a 0
    for(size_t i = 0; i < 5; ++i){
        n[i] = 0; // imposta a 0 l'elemento alla locazione i
    }

    printf("%s%13s\n", "Element", "Value");

    // invia in uscita i contenuti dell'array n in formato tabellare
    for(size_t i = 0; i < 5; ++i){
        printf("%7u%13d\n", i, n[i]);
    }
}