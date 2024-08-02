// Fig. 7.6: fig07_06.c
// Eleva al cubo una variabile usando il passaggio per valore.
#include <stdio.h>

int cubeByValue(int n); // prototipo

int main(void)
{
    int number = 5; // inizializza number

    printf("The original value of number is %d", number);

    // passa number per valore a cubeByValue
    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n", number);
}

// calcola e restituisci il cubo di un argomento intero
int cubeByValue(int n)
{
    return n * n * n; // restituisci il cubo di n
}