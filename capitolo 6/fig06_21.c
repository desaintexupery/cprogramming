// Fig. 6.21: fig06_21.c
// Inizializzazione di array multidimensionali.
#include <stdio.h>

void printArray(int a[][3]); // prototipo di funzione

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Values in array1 by row are:");
    printArray(array1);

    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Values in array2 by row are:");
    printArray(array2);

    int array3[2][3] = {{1, 2}, {4}};
    puts("Values in array3 by row are:");
    printArray(array3);
}

// funzione per stampare un array con due righe e tre colonne
void printArray(int a[][3])
{
    // iterazione per righe
    for(size_t i = 0; i <= 1; ++i){

        // stampa i valori delle colonne
        for(size_t j = 0; j <= 2; ++j){
            printf("%d ", a[i][j]);
        }

        printf("\n"); // inizia una nuova riga di stampa
    }
}