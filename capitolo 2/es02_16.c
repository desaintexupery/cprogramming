// Es. 2.16: es02_16.c
// (Aritmetica)
// Scrivete un programma che chieda all'utente di inserire
// due numeri, che li legga e ne stampi la somma, 
// il prodotto, la differenza, il quoziente e il resto.
#include <stdio.h>

int main( void )
{
    int num1;
    int num2;

    printf( "Inserisci due numeri interi: \n" );

    scanf( "%d %d", &num1, &num2 );

    int somma = num1 + num2;
    int prodotto = num1 * num2;
    int differenza = num1 - num2;
    int quoziente = num1 / num2;
    int resto = num1 % num2;

    printf( "La loro somma è %d\n", somma );
    printf( "Il loro prodotto è %d\n", prodotto );
    printf( "La loro differenza è %d\n", differenza );
    printf( "Il loro quoziente è %d\n", quoziente );
    printf( "Il loro  resto è %d\n", resto );
}