// Fig. 6.6: fig06_06.c
// Calcolare la somma degli elementi di un array.
#include <stdio.h>
#define SIZE 12

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // usa una lista di inizializzatori per inizializzare l'array
    int a[SIZE] = {1, 3, 5, 4 , 7, 2, 99, 16, 45, 67, 89, 45};
    int total = 0; // somma dell'array

    // somma i valori contenuti nell'array a
    for(size_t i = 0; i < SIZE; ++i){
        total += a[i];
    }

    printf("Total of array element values is %d\n", total);
}