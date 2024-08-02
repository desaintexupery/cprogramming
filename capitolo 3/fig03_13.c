// Fig. 3.13: fig03_13.c
// Preincremento e postincremento.
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main( void ) 
{
    int c; // definizione della variabile

    // illustrazione del postincremento
    c = 5; // assegna 5 a c
    printf( "%d\n", c ); // stampa 5
    printf( "%d\n", c++ ); // stampa 5 e poi postincrementa
    printf( "%d\n\n", c ); // stampa 6

    // illustrazione del preincremento
    c = 5; // assegna 5 a c
    printf( "%d\n", c ); // stampa 5
    printf( "%d\n", ++c ); // preincrementa e poi stampa 6
    printf( "%d", c ); // stampa 6
} // fine della funzione main