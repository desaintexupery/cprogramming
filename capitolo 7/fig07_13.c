// Fig. 7.13: fig07_13.c
// Tentativo di modificare un puntatore costante a dati non costanti.
#include <stdio.h>

int main(void)
{
    int x; // definisci x
    int y; // definisci y

    // ptr è un puntatore costante a un intero che può essere
    // modificato tramite ptr
    int * const ptr = &x;

    *ptr = 7; // permesso: *ptr non è const
    // ptr = &y; // errore: ptr è const
}