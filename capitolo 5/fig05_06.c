// Fig. 5.6: fig05_06.c
// Meccanismo della pila delle chiamate delle funzioni
// e dei record di attivazione con l'esempio di una funzione square.
#include <stdio.h>

int square(int); // prototipo per la funzione square

int main()
{
    int a = 10; // variabile automatica locale in main

    printf("%d squared: %d\n", a, square(a));
}

// restituisce il quadrato di un intero
int square(int x) // x è una variabile locale
{
    return x * x; // calcola il quadrato e restituisci il risultato
}