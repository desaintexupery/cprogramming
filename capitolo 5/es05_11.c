// Es. 5.11: es05_11.c
// Arrotondamento
// La funzione floor può essere usata per arrotondare un numero in riferimento
// a una specifica posizione decimale. L'istruzione
// y = floor(x * 10 + .5) / 10;
// arrotonda x alla posizione dei decimi (la prima posizione alla destra del punto
// decimale). L'istruzione
// y = floor(x * 100 + .5) / 100;
// arrotonda x alla posizione dei centesimi (la secondaa posizione alla destra del
// punto decimale). Scrivete un rpogramma che definisca quattro funzioni per
// arrotondare un numero x in vari modi:
// a) roundToInteger(number) // arrotonda all'intero più vicino
// b) roundToTenths(number) // arrotonda alla posizione dei decimi
// c) roundToHundreths(number) // arrotonda alla posizione dei centesimi
// d) roundToThousandths(number) // arrotonda alla posizione delle migliaia
// Per ogni valore letto, il vostro programma deve stampare il valore originario, il
// numero arrotondato all'intero più vicino, il numero arrotondato alla posizione dei
// decimi, il numero arrotondato alla posizione dei centesimi e il numero arrotondato
// alla posizione delle migliaia.
#include <stdio.h>
#include <math.h>

float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void)
{
    float number;

    printf("Enter a number to round(EOF to end): ");
    scanf("%f", &number);

    while(number != EOF){
        printf("Number: %f\n", number);
        printf("Round to Integer: %f\n", roundToInteger(number));
        printf("Round to Tenths: %f\n", roundToTenths(number));        
        printf("Round to Hundreths: %f\n", roundToHundreths(number));        
        printf("Round to Thousandths: %f\n", roundToThousandths(number));     

    printf("Enter a number to round: ");
    scanf("%f", &number);        
    }
}

float roundToInteger(float number)
{
    float y = floor(number + .5);
    return y;
}

float roundToTenths(float number)
{
    float y = floor(number * 10 + .5) / 10;
    return y;
}

float roundToHundreths(float number)
{
    float y = floor(number * 100 + .5) / 100;
    return y;
}

float roundToThousandths(float number)
{
    float y = floor(number * 1000 + .5) / 1000;
    return y;
}