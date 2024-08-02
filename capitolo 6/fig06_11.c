// Fig. 6.11: fig06_11.c
// Gli array statici sono automaticamente inizializzati a zero
#include <stdio.h>

void staticArrayInit(void); // prototipo di funzione
void automaticArrayInit(void); // prototipo di funzione

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    puts("First call to each function:");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function:");
    staticArrayInit();
    automaticArrayInit();
}

// funzione usata per illustrare un array locale statico
void staticArrayInit(void)
{
    // inizializza gli elementi a 0 prima che la funzione sia chiamata
    static int array1[3];

    puts("\nValues on entering staticArrayInit:");

    // invia in uscita i contenuti di array1
    for(size_t i = 0; i <= 2; ++i){
        printf("array1[%u] =   %d  ", i, array1[i]);
    }

    puts("\nValues on exiting staticArrayInit:");

    // modifica e invia in uscita i contenuti di array1
    for(size_t i = 0; i <= 2; ++i){
        printf("array1[%u] =   %d  ", i, array1[i] += 5);
    }
}

// funzione usata per illustrare un array locale automatico
void automaticArrayInit(void)
{
    // inizializza gli elementi ogni volra che la funzione è chiamata
    int array2[3] = {1, 2, 3};

    puts("\n\nValues on entering automaticArrayInit:");

    // invia in uscita i contenuti di array2
    for(size_t i = 0; i <= 2; ++i){
        printf("array2[%u] =   %d  ", i, array2[i]);
    }

    puts("\nValues on exiting automaticArrayInit:");

    // modifica e invia in uscita i contenuti di array2
    for(size_t i = 0; i <= 2; ++i){
        printf("array2[%u] =   %d  ", i, array2[i] += 5);
    }
}