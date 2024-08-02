// Fig. 4.9: fig04_09.c
// Uso dell'istruzione di iterazione do...while.
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1; // inizializza il contatore

    do {
        printf("%u ", counter);
    } while (++counter <= 10);
}