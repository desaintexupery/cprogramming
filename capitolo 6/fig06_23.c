// Fig. 6.23: fig06_23.c
// Uso degli array di lunghezza variabile in C99
#include <stdio.h>

// prototipi di funzioni
void print1DArray(size_t size, int array[size]);
void print2DArray(int row, int col, int array[row][col]);

int main(void)
{
    printf("%s", "Enter size of a one-dimensional array: ");
    int arraySize; // dimensione di un array 1-D
    scanf("%d", &arraySize);

    int array[arraySize]; // array 1-D di lunghezza variabile

    printf("%s", "Enter number of rows and colums in another 2-D array: ");
    int row1, col1; // numero di righe e colonne in un array 2-D
    scanf("%d %d", &row1, &col1);

    int array2D1[row1][col1]; // array 2-D di lunghezza variabile

    printf("%s", "Enter number of rows and colums in another 2-D array: ");
    int row2, col2; // numero di righe e colonne in un array 2-D
    scanf("%d %d", &row2, &col2);

    int array2D2[row2][col2]; // array 2-D di lunghezza variabile

    // test dell'operatore sizeof su VLA
    printf("\nsizeof(array) yields array size of %d bytes\n", sizeof(array));

    // assegna dei valori agli elementi del VLA 1-D
    for(size_t i = 0; i < arraySize; ++i){
        array[i] = i * i;
    }

    // assegna dei valori agli elementi del primo VLA 2-D
    for(size_t i = 0; i < row1; ++i){
        for(size_t j = 0; j < col1; ++j){
            array2D1[i][j] = i + j;
        }
    }

    // assegna dei valori agli elementi del secondo VLA 2-D
    for(size_t i = 0; i < row2; ++i){
        for(size_t j = 0; j < col2; ++j){
            array2D1[i][j] = i + j;
        }
    }

    puts("\nOne-dimensional array:");
    print1DArray(arraySize, array); // VLA 1-D come argomento

    puts("\nFirst two-dimensional array:");
    print2DArray(row1, col1, array2D1); // VLA 2-D come argomento

    puts("\nSecond two-dimensional array:");
    print2DArray(row2, col2, array2D2); // VLA 2-D come argomento   
}

void print1DArray(size_t size, int array[size])
{
    // stampa i contenuti dell'array
    for(size_t i = 0; i < size; ++i){
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void print2DArray(int row, int col, int array[row][col])
{
    // stampa i contenuti dell'array
    for(size_t i = 0; i < row; ++i){
        for(size_t j = 0; j < col; ++j){
            printf("%5d", i, array[i][j]);
        }

        puts("");
    }
}