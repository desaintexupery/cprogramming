// Fig. 4.1: fig04_01.c
// Iterazione controllata da contatore
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1; // inizializzazione

    while ( counter <= 10 ) { // condizione di iterazione
        printf( "%u\n", counter );
        ++counter; // incremento
    }
    
}