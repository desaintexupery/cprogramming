// Fig 5.19: fig05_19.c
// Funzione ricorsiva fibonacci
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n); // prototipo di funzione

int main(void)
{
    unsigned int number; // numero inserito dall'utente

    // ottieni un numero intero dall'utente
    printf("%s", "Enter an integer: ");
    scanf("%u", &number);

    // calcola il valore di fibonacci per il numero inserito dall'utente
    unsigned long long int result = fibonacci(number);

    // stampa il risultato
    printf("Fibonacci(%u) = %llu\n", number, result);
}

// Definizione ricorsiva della funzione fibonacci
unsigned long long int fibonacci(unsigned int n)
{
    // caso di base
    if(0 == n || 1 == n){
        return n;
    }
    else{ // passo ricorsivo
        return fibonacci(n - 1) + fibonacci(n-2);
    }
}