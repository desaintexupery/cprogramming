// Fig. 6.19: fig06_19.c
// Ricerca binaria in un array ordinato
#include <stdio.h>
#define SIZE 15

// prototipi di funzione
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    int a[SIZE]; // crea l'array a

    // crea i dati
    for(size_t i = 0; i < SIZE; ++i){
        a[i] = 2 * i;
    }

    printf("%s", "Enter a number between 0 and 28: ");
    int key; // valore da localizzare nell'array a
    scanf("%d", &key);

    printHeader();

    // cerca la chiave nell'array a
    size_t result = binarySearch(a, key, 0, SIZE - 1);

    // stampa i risultati
    if(result != -1){
        printf("\n%d found at index %d\n", key, result);
    }
    else{
        printf("\n%d not found\n", key);
    }
}

// funzione che esegue la ricerca binaria su un array
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    // ripeti finché l'indice low non diventa maggiore dell'indice high
    while(low <= high){
        
        // determina l'elemento centrale del sottoarray considerato
        size_t middle = (low + high) / 2;

        // stampa il sottoarray considerato in questa iterazione
        printRow(b, low, middle, high);

        // se l'elemento centrale è searchKey, restituisci middle
        if(searchKey == b[middle]){
            return middle;
        }

        // se searchKey è minore, nuovo valore di high
        else if(searchKey < b[middle]){
            high = middle - 1; // cerca nella parte bassa dell'array
        }

        // se searchKey è maggiore, nuovo valore di low
        else{
            low = middle + 1;
        }
    } // fine di while

    return -1; // searchKey non trovato
}

// Stampa l'intestazione per l'output
void printHeader(void)
{
    puts("\nIndices:");

    // stampa l'intestazione della colonna
    for(unsigned int i = 0; i < SIZE; ++i){
        printf("%3u ", i);
    }

    puts(""); // inizia una nuova riga di stampa

    // stampa una riga di caratteri -
    for(unsigned int i = 1; i <= 4 * SIZE; ++i){
        printf("%s", "-");
    }

    puts(""); // inizia una nuova riga di stampa
}

// Stampa una riga dell'output che mostra la parte
// corrente dell'array ancora da processare.
void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    // ciclo attraverso l'intero array
    for(size_t i = 0; i < SIZE; ++i){

        // stampa spazi se si è al di fuori del sottoarray corrente
        if(i < low || i > high){
            printf("%s", "   ");
        }
        else if(i == mid){ // stampa l'elemento centrale
            printf("%3d*", b[i]); // marca il valore centrale
        }
        else{ // stampa gli elemento del sottoarray
            printf("%3d", b[i]);
        }
    }

    puts(""); // inizia una nuova riga di stampa
}