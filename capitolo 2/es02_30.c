// Es. 2.30: es2_30.c
// Separazione delle cifre di un intero
// Scrivete un programma che riceva in ingresso un numero
// di cinque cifre, separi il nummero nelle sue cifre
// individuali e stampi le cifre ciascuna separata 
// dall'altra da tre spazi. [Suggerimento: usate combinazioni
// di divisioni intere con l'operazione di resto.] Ad
// esempio, se l'utente scrive 42139, il programma deve stampare
// 4   2   1   3   9
#include <stdio.h>

int main( void )
{
    int num;
    int num1, num2, num3, num4, num5;

    printf( "Inserisci un numero di 5 cifre: " );
    scanf( "%d", &num );

    num1 = num / 10000;
    num2 = num % 10000 / 1000;
    num3 = num % 1000 / 100;
    num4 = num % 100 / 10;
    num5 = num % 10;

    printf( "%d   %d   %d   %d   %d", num1, num2, num3, num4, num5 );
}