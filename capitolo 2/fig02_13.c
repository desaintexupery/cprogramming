// Fig. 2.13: fig02_13.c
// Uso dell'istruzione if, degli operatori
// relazionali e degli operatori di uguaglianza.
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main( void )
{
    printf( "Enter two integers, and I will tell you\n" );
    printf( "the relationship they satisfy: " );

    int num1; // primo numero inserito dall'utente
    int num2; // secondo numero inserito dall'utente

    scanf( "%d %d", &num1, &num2 ); // legge due interi

    if ( num1 == num2 ) {
        printf( "%d is equal to %d\n", num1, num2 );
    } // fine di if

    if ( num1 != num2 ) {
        printf( "%d is not equal to %d\n", num1, num2 );
    } // fine di if

    if ( num1 < num2 ) {
        printf( "%d is less than %d\n", num1, num2 );
    } // fine di if

    if ( num1 > num2 ) {
        printf( "%d is more than %d\n", num1, num2 );
    } // fine di if

    if ( num1 <= num2 ) {
        printf( "%d is less than or equal to %d\n", num1, num2 );
    } // fine di if

    if ( num1 >= num2 ) {
        printf( "%d is more than or equal to %d\n", num1, num2 );
    } // fine di if
} // fine della funzione main