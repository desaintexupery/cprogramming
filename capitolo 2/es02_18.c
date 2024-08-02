// Es. 2.18: es02_18.c
// (Confronto di interi)
// Scrivete un programma che chieda all'utente
// di inserire due interi, che legga tali numeri e 
// quindi stampi il numero maggiore seguito dalle parole
// "is larger". Se i numeri sono uguali, stampate il messaggio
// "These numbers are equal". Usate solamente la forma
// a selezione singola dell'istruzione if che avete imparato 
// in questo capitolo.
#include <stdio.h>

int main( void )
{
    int num1, num2;

    printf( "Enter two integers: " );
    scanf( "%d %d", &num1, &num2 );

    if ( num1 > num2 ) {
        printf( "%d is larger", num1 );
    }

    if ( num2 > num1 ) {
        printf( "%d is larger", num2 );
    }

    if ( num1 == num2 ) {
        printf( "These numbers are equal");
    }
}
