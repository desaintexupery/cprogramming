// Fig. 5.18: fig05_18.c
// Funzione fattoriale ricorsiva.
#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
    // durante ogni iterazione, calcola
    // factorial(i) e stampa il risultato
    for(unsigned int i = 0; i <=21; ++i){
        printf("%u! = %llu\n", i, factorial(i));
    }
}

// definizione ricorsiva della funzione fattoriale
unsigned long long int factorial(unsigned int number)
{
    // caso di base
    if(number <= 1){
        return 1;
    }
    else{ // passo ricorsivo
        return (number * factorial(number - 1));
    }
}