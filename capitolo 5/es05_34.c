// Es. 5.34: es05_34.c
// Esponenziazione ricorsiva
// Scrivete una funzione ricorsiva power(base, exponent) che quando viene invocata
// restituisca
// base^(exponent)
// Ad esempio, power(3,4) = 3 * 3 * 3 * 3. Supponete che exponent sia un intero
// maggiore o uguale a 1. Suggerimento: il passo di ricorsione dovrebbe usare la
// relazione
// base^(exponent) = base * base^(exponent - 1)
// e la condizione di terminazione si verifica quando exponent è uguale a 1 perché
// base^(1) = base
#include <stdio.h>

int integerPower(base, exponent);

int main(void)
{
    int base, exponent;

    printf("%s", "Enter the base: ");
    scanf("%d", &base);
    printf("%s", "Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d to the power of %d is equal to %d", base, exponent, integerPower(base, exponent));
}

int integerPower(base, exponent)
{
    int result = 1;
    for(int i = 1; i <= exponent; ++i){
        result *= base; 
    }
    return result;
}