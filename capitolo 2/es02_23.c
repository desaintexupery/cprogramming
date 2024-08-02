// Es. 2.23: es02_23.c
// (Intero maggiore e minore)
// Scrivete un programma che legga tre interi e poi
// determini e stampi il maggiore e il minore del
// gruppo. Usate solamente le tecniche di programmazione
// che avete imparato in questo capitolo.
#include <stdio.h>

int main( void )
{
    int num1, num2, num3;
    int maggiore, minore;

    printf( "Inserisci tre interi: " );
    scanf( "%d %d %d", &num1, &num2, &num3 );

    if( num1 > num2 ){
        if( num1 > num3 ){
            maggiore = num1;
        }
    }
    if( num2 > num1 ){
        if( num2 > num3 ){
            maggiore = num1;
        }
    }
    if( num3 > num1 ){
        if( num3 > num2 ){
            maggiore = num3;
        }
    }

    if( num1 < num2 ){
        if( num1 < num3 ){
            minore = num1;
        }
    }
    if( num2 < num1 ){
        if( num2 < num3 ){
            minore = num2;
        }
    }
    if( num3 < num1 ){
        if( num3 < num2 ){
            minore = num3;
        }
    }

    printf( "Maggiore: %d\n", maggiore );
    printf( "Minore: %d", minore );
}