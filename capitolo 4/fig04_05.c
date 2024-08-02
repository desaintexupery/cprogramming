// Fig. 4.5: fig04_05.c
// Somma con for.
#include <stdio.h>

int main(void)
{
    unsigned int sum = 0; // inizializza sum

    for (unsigned int number = 2; number <= 100; number =+ 2) {
        sum += number; // aggiungi number a sum
    }

    printf("Sum is %u\n", sum);
}