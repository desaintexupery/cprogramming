// Fig 4.2: fig04_02.c
// Iterazione controllata da contatore con l'istruzione for.
#include <stdio.h>

int main(void)
{
    // iniziallizzazione, condizione dell'iterazione e incremento
    // sono tuttin inclusi nell'intestazione dell'istruzione for.
    for (unsigned int counter = 1; counter <= 10; ++counter) {
        printf("%u\n", counter);
    }
}