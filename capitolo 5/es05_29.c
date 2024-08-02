// Es. 5.29: es05_29.c
// Massimo comun divisore
// Il massimo comun divisore (GCD, Greatest Common Divisor) di due interi è
// l'intero più grande che divide in parti uguali ognuno dei due numeri.
// Scrivete la funzione gcd che restituisce il massimo comun divisore di due interi.
#include <stdio.h>

int gcd(x, y);

int main(void)
{
    int num1, num2;
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2);

    printf("GCD: %d", gcd(num1, num2));
}

int gcd(x, y)
{
    if(x % y == 0){
        return y;
    }
    else
        return gcd(y, x % y);
}