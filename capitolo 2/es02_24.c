// Es. 2.24: es02_24.c
// (Dispari o pari)
// Scrivete un programma che legga un intero4
// e determini e stampi se sia pari o dispari.
// [Suggerimento: usate l'operatore di resto.
// Un numero pari è un multiplo di due. Qualunque
// multiplo di due lascia un resto di zero quando
// è diviso per due.]
#include <stdio.h>

int main( void )
{
    int num;
    int extra;

    printf( " Inserisci un intero: " );
    scanf( "%d", &num );

    extra = num % 2;

    if( extra == 0 ){
        printf( "Pari" );
    }
    if( extra != 0 ){
        printf( "Dispari" );
    }
}