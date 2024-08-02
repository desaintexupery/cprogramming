// Fig. 7.14: fig07_14.c
// Tentativo di modificare un puntatore costante a dati costanti.
#include <stdio.h>

int main(void)
{
    int x = 5; // inizializza x
    int y; // definisci y

    // ptr è un puntatore costante a un intero costante. ptr
    // punta sempre alla stessa locazione; l'intero in quella locazione
    // non può essere modificato
    const int *const ptr = &x; // l'inizializzazione è OK

    printf("%d\n", *ptr);
    // *ptr = 7; // errore: *ptr è const;
    // ptr = &y; // errore: ptr è const;
}