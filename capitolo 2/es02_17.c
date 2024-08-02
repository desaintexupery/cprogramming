// Es. 2.17: es02_17.c
// (Stampa di valori con printf) 
// Scrivete un programma che stampi sulla stessa riga 
// i numeri da 1 a 4. Scrivete il programma usando i seguenti metodi.
// a)  Uso di una sola istruzione printf senza
//     specificatori di conversione.
// b)  Uso di una sola istruzione printf con quattro
//     specificatori di conversione.
// c)  Uso di quattro istruzioni printf.
#include <stdio.h>

int main( void )
{
    printf( "a) " );
    printf( "1 2 3 4\n" );

    printf( "b) " );
    printf( "%d %d %d %d\n", 1, 2, 3, 4 );

    printf( "c) " );
    printf( "1 " );
    printf( "2 " );
    printf( "3 " );
    printf( "4" );

}
