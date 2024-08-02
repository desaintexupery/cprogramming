// Es. 3.22: es03_22.c
// Stampare numeri con un ciclo
// Scrivete un programma che utilizzi l'iterazione per
// stampare i numeri da 1 a 10 l'uno accanto all'altro
// sulla stessa riga con tre spazi tra loro
#include <stdio.h>

int main( void )
{
    int counter = 1;
    
    while( counter <= 10 ){
        printf( "%d   ", counter );
        counter ++;
    }
}