// Es 3.41: es03_41.c
// Diametro, circonferenza e area di un cerchio
// Scrivete un programma che legga il raggio di un cerchio (come valore
// float) e calcoli e stampi il diametro, la circonferenza e l'area.
// Usate il valore 3,14159 per π.
#include <stdio.h>

int main(void)
{
    float raggio;
    float diametro, circonferenza, area;
    float pi = 3.14159;

    printf("Inserisci il raggio: ");
    scanf("%f", &raggio);

    diametro = raggio * 2;
    circonferenza = 2 * pi * raggio;
    area = raggio * raggio * pi;

    printf("Diametro: %f\n", diametro);
    printf("Circonferenza: %f\n", circonferenza);
    printf("Area: %f\n", area);
}