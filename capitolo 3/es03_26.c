// Es. 3.26: es03_26.c
// Trovare i due numeri più grandi
// Usando un approccio simile a quello dell'esercizio 3.23,
// trovate i due valori più grandi tra 10 numeri. [Nota:
// potete inserire ogni numero solo una volta.]
#include <stdio.h>

int main(void)
{
    int counter;
    unsigned int number;
    unsigned int largest;
    unsigned int second_largest;

    counter = 1;
    number = 0;
    largest = 0;
    second_largest = 0;

    while( counter <= 10 ) {

        printf( "Enter a number: " );
        scanf( "%u", &number );
        if ( number > largest ) {
            second_largest = largest;
            largest = number;
            }
        else if ( number > second_largest ) {
                second_largest = number;
            }
        
        counter++;
        }
    printf( "Largest number is: %u\n", largest );
    printf( "Second largest number is: %u\n", second_largest );
    }