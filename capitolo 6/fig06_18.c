// Fig. 6.18: fig06_18.c
// Ricerca lineare in un array
#include <stdio.h>
#define SIZE 100

// prototipo di funzione
size_t linearSearch(const int array[], int key, size_t size);

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    int a[SIZE]; // crea l'array a

    // crea alcuni dati
    for(size_t x = 0; x < SIZE; ++x){
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey; // valore da localizzare nell'array a
    scanf("%d", &searchKey);

    // tenta di localizzare searchKey nell'array a
    size_t index = linearSearch(a, searchKey, SIZE);

    // stampa i risultati
    if(index != -1){
        printf("Found value in element %d\n", index);
    }
    else{
        puts("Value not found");
    }
}

// confronta la chiave con ogni elemento dell'array;
// restituisci l'indice dell'elemento
// se la chiave viene trovata o -1 se la chiave non viene trovata
size_t linearSearch(const int array[], int key, size_t size)
{
    // ciclo attraverso l'array
    for(size_t n = 0; n < size; ++n){

        if(array[n] == key){
            return n; // restituisci la posizione della chiave
        }
    }
    
    return -1; // chiave non trovata
}