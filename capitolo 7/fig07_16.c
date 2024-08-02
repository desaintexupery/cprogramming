// Fig. 7.16: fig07_16.c
// L'applicazione di sizeof al nome di un array restituisce
// il numero di byte nell'array
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr); // prototipo

int main(void)
{
    float array[SIZE]; // crea l'array

    printf("The number of bytes in the array is %u\nThe number of bytes returned by getSize is %u\n", sizeof(array), getSize(array));
}

// restituisce la dimensione di ptr
size_t getSize(float *ptr)
{
    return sizeof(ptr);
}