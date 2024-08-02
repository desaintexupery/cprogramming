// Es. 5.10: es05_10.c
// Arrotondamento
// Un'applicazione della funzione floor è l'arrotondamento di un valore
// all'intero più vicino. L'istruzione
// y = floor(x + .5);
// arrotonda il numero x all'intero più vicino e assegna il risultato a y.
// Scrivete un programma che legga diversi numeri e usi l'istruzione
// precedente per arrotondare ognuno di essi all'intero più vicino. Per ogni
// numero processato stampate sia il numero originario sia il numero arrotondato.
#include <stdio.h>
#include <math.h>

int main(void)
{
    float num;

    printf("Inserire un numero: ");
    scanf("%f", &num);

    while(num != EOF){
        float y = floor(num + .5);
        printf("%f\t%f\n", num, y);
        printf("Inserire un numero: ");
        scanf("%f", &num);
    }
}