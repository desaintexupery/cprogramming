// Es. 3.29: es03_29.c
// Che cosa stampa il seguente programma?
#include <stdio.h>

int main( void )
{
    unsigned int row = 10; // inizializza row

    while ( row >= 1 ) { // ripeti finché row < 1
        unsigned int column = 1; // poni column a 1 all'inizio dell'iterazione
        
        while ( column <= 10 ) { // ripeti 10 volte
            printf( "%s", row % 2 ? "<" : ">" ); // output
            ++column; // incrementa column }
            } // fine del while interno

        --row; // decrementa row
        puts( "" ); // inizia una nuova riga di output
    } // fine del while esterno
} // fine della funzione main