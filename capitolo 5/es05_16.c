// Es. 5.16: es05_15.c
// Esponenziazione
// Scrivete una funzione integerPower(base, exponent) che restituisca il valore
// base^(exponent). Ad esempio, integerPower(3, 4) = 3 * 3 * 3 * 3. Supponete che
// exponent sia un intero positivo diverso da zero e che base sia un intero. La
// funzione integerPower deve usare for come struttura di controllo per il calcolo.
// Non usate alcuna funzione della libreria math.
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