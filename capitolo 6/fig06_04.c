// Fig. 6.4: fig06_04.c
// Inizializzare un array con una lista di inizializzazione
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // usa una lista di inizializzatori per inizializzare l'array n
    int n[5] = {32, 27, 64, 18, 95};

    printf("%s%13s\n", "Element", "Value");

    // invia in uscita i contenuti dell'array n in formato tabellare
    for(size_t i = 0; i < 5; ++i){
        printf("%7u%13d\n", i, n[i]);
    }
}