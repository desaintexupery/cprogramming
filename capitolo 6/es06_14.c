// Es. 6.14: es06_14.c
// Modifiche al programma per media, mediana e moda
// Modificate il programma della Figura 6.16 in modo che la funzione mode sia in grado
// di trattare situazioni di parità per il valore della moda. Modificate anche la funzione 
// median in modo che vengza calcolata la media dei due elementi centrali in un array con
// un numero pari di elementi.
#include <stdio.h>
#define SIZE 99

// prototipi di funzione
void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(unsigned int a[]);
void printArray(unsigned const int a[]);

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    unsigned int frequency[10] = {0}; // inizializza l'array frequency

    // inizializza l'array response
    unsigned int response[SIZE] =
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
         4, 5, 6, 1, 6, 5, 7, 8, 7};

    // elabora le risposte
    mean(response);
    median(response);
    mode(frequency, response);
}

// calcola la media di tutti i valori delle risposte
void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n", "********", "  Mean", "********");

    unsigned int total = 0; // contiene la somma dei valori

    // calcola il totale dei valori delle risposte
    for(size_t j = 0; j < SIZE; ++j){
        total += answer[j];
    }

    printf("The mean is the average value of the data\nitems. The mean is equal to the total of\nall the data items divided by the number\nof data items (%u). The mean value for\nthis run is %u / %u = %.4f\n\n", SIZE, total, SIZE, (double) total / SIZE);
}

// ordiana l'array e determina il valore dell'elemento mediano
void median(unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n%s", "********", " Median", "********", "The unsorted array of responses is");

    printArray(answer); // stampa l'array non ordinato

    bubbleSort(answer); // ordina l'array

    printf("%s", "\n\nThe sorted array is");
    printArray(answer); // stampa l'array ordinato

    // stampa l'elemento mediano
    printf("\n\nThe median is element %u of\nthe sorted %u element array.\nFor this run the median is %u\n\n", SIZE / 2, SIZE, answer[SIZE / 2]);
}

// determina la risposta più frequente
void mode(unsigned int freq[], const unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n", "********", "  Mode", "*********");

    // inizializza le frequenze a 0
    for(size_t rating = 1; rating <= 9; ++rating){
        freq[rating] = 0;
    }

    // calcola le frequenze
    for(size_t j = 0; j < SIZE - 1; ++j){
        ++freq[answer[j]];
    }

    // stampa le intestazioni per le colonne dei risultati
    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram", "1   1   2   2", "5   0   5   0   5");

    // stampa i risultati
    unsigned int largest = 0; // rappresenta la frequenza maggiore
    unsigned int modeValue = 0; // rappresenta la risposta più frequente

    for(size_t rating = 1; rating <= 9; ++rating){
        printf("%8u%11u               ", rating, freq[rating]);
        
        // cerca la moda e la frequenza maggiore
        if(freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }

        // stampa una barra dell'istogramma
        for(unsigned int h = 1; h <= freq[rating]; ++h){
            printf("%s", "*");
        }

        puts(""); // inizia una nuova riga di stampa
    }

    // stampa il valore della moda
    printf("\nThe mode is the most frequent value.\nFor this run the mode includes (");
	
    for(size_t rating = 1; rating <= 9; rating++)
        if(freq[rating] == largest)
            printf("%d ", rating);
    printf(") which occurred %d times.\n", largest );
}

// funzione che ordina un array con l'algoritmo bubble sort
void bubbleSort(unsigned int a[])
{
    // ciclo per il numero delle passate
    for(unsigned int pass = 1; pass < SIZE; ++pass){
        
        // ciclo per il numero di confronti a ogni passata
        for(size_t j = 0; j < SIZE - 1; ++j){

            // scambia gli elementi se non sono in ordine
            if(a[j] > a[j + 1]){
                unsigned int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

// stampa i contenuti dell'array (20 valori per riga)
void printArray(const unsigned int a[])
{
    // stampa i contenuti dell'array
    for(size_t j = 0; j < SIZE; ++j){

        if(j % 20 == 0){ // inizia una nuova riga ogni 20 valori
            puts("");
        }

        printf("%2u", a[j]);
    }
}