// Fig. 7.15: fig07_15.c
// Inserimento di valori in un array, ordinamento dei valori in
// ordine crescente e stampa dell'array risultante/
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const size_t size); // prototipo

int main(void)
{
    // inizializza l'array a
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");

    // effettua un ciclo lungo l'array a
    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE); // ordina l'array

    puts("\nData items in ascending order");

    // effettua un ciclo lungo l'array a
    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d", a[i]);
    }

    puts("");
}

// ordina un array di interi usando l'algoritmo bubble sort
void bubbleSort(int * const array, const size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr); // prototipo

    // ciclo di controllo delle iterazioni
    for(unsigned int pass = 0; pass < size - 1; ++pass){

        // ciclo di controllo dei confronti durante ogni iterazione
        for(size_t j = 0; j < size -1; ++j){

            // scambia gli elementi adiacenti se non sono in ordine
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

// scambia i valori delle locazioni di memoria alle quali element1Ptr
// ed element2Ptr rispettivamente puntano
void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}