// Fig. 7.20: fig07_20.c
// Uso delle notazioni con indice e con puntatori per gli array.
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
    int b[] = {10, 20, 30, 40}; // crea e inizializza l'array b
    int *bPtr = b; // crea bPtr e fallo puntare all'array b

    // stampa l'array b usando la notazione degli array con indice
    puts("Array b printed with:\nArray index notation");

    // effettua un ciclo lungo l'array b
    for(size_t i = 0; i < ARRAY_SIZE; ++i){
        printf("b[%u] = %d\n", i, b[i]);
    }

    // stampa l'array b con il nome e la notazione puntatore/offset
    puts("\nPointer/offset notation where\nthe pointer is the array name");

    // effettua un ciclo lungo l'array b
    for(size_t offset = 0; offset < ARRAY_SIZE; ++offset){
        printf("*(b + %u) = %d\n", offset, *(b + offset));
    }

    // stampa l'array b con bPtr e la notazione degli array con indice
    puts("\nPointer subscrip notation");

    // effettua un ciclo lungo l'array b
    for(size_t i = 0; i < ARRAY_SIZE; ++i){
        printf("bPtr[%u] = %d\n", i, bPtr[i]);
    }

    // stampa l'array b usando bPtr e la notazione puntatore/offset
    puts("\nPoiter/offset notation");

    // effettua un ciclo lungo l'array b
    for(size_t offset = 0; offset < ARRAY_SIZE; ++offset){
        printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
    }
}