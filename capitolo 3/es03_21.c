// Es. 3.21: es03_21.c
// Predecrementare e postdecrementare
// Scrivete un programma che dimostri la differenza tra
// predecrementare e postdecrementare usando l'operatore
// di decremento --.
#include <stdio.h>

int main(void)
{
    int c;

    c = 5;
    printf( "%d\n", c );
    printf( "%d\n", c-- );
    printf( "%d\n", c );

    c = 5;
    printf( "%d\n", c );
    printf( "%d\n", --c );
    printf( "%d\n", c ); 
}