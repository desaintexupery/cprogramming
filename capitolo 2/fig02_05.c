// Fig. 2.5: fig02_05.c
// Programma per l'addizione
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main( void )
{
    int integer1; //primo numero inserito dall'utente
    int integer2; //secondo numero inserito dall'utente

    printf( "Enter first integer\n" ); // prompt
    scanf( "%d", &integer1 ); // legge un intero

    printf( "Enter second integer\n" ); // prompt
    scanf( "%d", &integer2 ); // legge un intero

    int sum; // variabile nella quale viene memorizzata la somma
    sum = integer1 + integer2; // assegna il totale a sum

    printf( "Sum is %d\n", sum ); // stampa la somma
} // fine della funzione main