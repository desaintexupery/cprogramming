// Es. 2.26: es02_26.c
// Multipli
// Scrivete un programma che legga due interi
// e determini e stampi se il primo è multiplo
// del secondo. [Suggerimento: usate l'operatore
// di resto.]
#include <stdio.h>

int main( void )
{
    int num1, num2;
    int multiplo;

    printf( "Inserisci due numeri: " );
    scanf( "%d %d", &num1, &num2 );

    multiplo = num1 % num2;
    if( multiplo == 0 ){
        printf( "%d è multiplo di %d", num1, num2 );
    }
}