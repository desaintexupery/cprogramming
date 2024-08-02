// Es. 3.23: es03_23.c
// Trovare il numero più grande
// Il processo di elaborazione che consiste nel trovare il numero
// più grande (cioè il massimo di un insieme di numeri) si usa
// frequentemente nelle applicazioni informatiche. Ad esempio, un
// programma che determina il vincitore di una gara di vendite
// riceve in ingresso il numero di unità vendute per ogni persona
// addetta alle vendite. La persona che vende più unità vince la gara.
// Scrivete un programma in pseudocodice e poi un programma in C che
// legga una serie di 10 numeri non-negativi e determini e stampi il
// maggiore dei numeri. Suggerimento: il vostro programma deve
// utilizzare tre variabili, come segue:
// counter: un contatore per contare fino a 10 (cioè per tenere il
//          conto di quanti numeri siano stati inseriti e per 
//          determinare quando tutti e dieci i numeri sono stati
//          elaborati)
// number:  il numero corrente inserito nel programma
// largest: il numero maggiore trovato fino a quel punto
#include <stdio.h>

int main(void)
{
    int counter;
    unsigned int number;
    unsigned int largest;

    counter = 1;
    number = 0;
    largest = 0;

    while( counter <= 10 ) {

        printf( "Enter a number: " );
        scanf( "%u", &number );
        if ( number > largest ) {
            largest = number;
        }

        counter++;
    }
    printf( "Largest number is: %u\n", largest );
}