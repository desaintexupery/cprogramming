// Es. 3.28: es03_28.c
// Cosa stampa il seguente programma?
#include <stdio.h>

int main( void )
{
    unsigned int count = 1; // inizializza count

    while ( count <= 10 ) { // ripeti 10 volte
    
    // output della riga di testo
    puts( count % 2 ? "****" : "++++++++" );
    ++ count; //  incrementa count
    } // fine di while
} // fine della funzione main