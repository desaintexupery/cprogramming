// Fig. 7.26: fig07_26.c
// Programma multifunzione di ordinamento che usa puntatori a funzioni.
#include <stdio.h>
#define SIZE 10

// prototipi
void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int maain(void)
{
    // inizializza l'array a non ordinato
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("%s", "Enter 1 to sort in ascending order,\nEnter 2 to sort in descending order: ");
    int order; // 1 per l'ordine crescente o 2 per l'ordine decrescente
    scanf("%d", &order);

    puts("\nData items in original order");

    // invia in uscita l'array originario
    for(size_t counter = 0; counter < SIZE; ++counter){
        printf("%5d", a[counter]);
    }

    // ordina l'array in ordine crescente; passa la funzione ascending
    // come argomento per specificare l'ordine crescente dell'ordinamento
    if(order == 1){
        bubble(a, SIZE, ascending);
        puts("\nData items in ascending order");
    }
    else{ // passa la funzione descending
        bubble(a, SIZE, descending);
        puts("\nData items in descending order");
    }
    // invia in uscita l'array ordinato
    for(size_t counter = 0; counter < SIZE; ++counter){
        printf("%5d", a[counter]);
    }

    puts("\n");
}

// bubble sort multifunzione; il parametro compare è un puntatore
// alla funzione di confronto che determina il tipo di ordinamento
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{
    void swap(int *element1Ptr, int *element2Ptr); // prototipo

    // ciclo di controllo per le iterazioni
    for(unsigned int pass = 1; pass < size; ++pass){
        
        // ciclo di controllo per il numero di confronti per iterazione
        for(size_t count = 0; count < size - 1; ++count){

            // se elementi adiacenti non sono in ordine, scambiali
            if((*compare)(work[count], work[count + 1])){
                swap(&work[count], &work[count + 1]);
            }
        }
    }
}

// scambia i valori alle locazioni di memoria a cui puntano
// element1Ptr ed element2Ptr
void swap(int *element1Ptr, int *element2Ptr)
{   
    int hold;
    hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

// determina se gli elementi non sono in ordine per un ordinamento
// di tipo crescente
int ascending(int a, int b)
{
    return b < a; // si deve effettuare lo scambia se b è minore di a
}

// determina se gli elementi non sono in ordine per un ordinamento
// di tipo decrescente
int descending(int a, int b)
{
    return b > a; // si deve effettuare lo scambia se b è maggiore di a
}