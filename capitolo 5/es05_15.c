// Es. 5.15: es05_15.c
// Calcolo dell'ipotenusa
// Definite una funzione chiamata hypotenuse che calcoli la lunghezza
// dell'ipotenusa di un triangolo rettangolo quando sono dati gli altri
// due lati. La funzione deve ricevere due argomenti di tipo double e
// restituire l'ipotenusa come un double. Testate il vostro programma
// con i valori dei lati specificati nella Figura 5.22.
#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);
double square(double num);

int main(void)
{
    double s1, s2;

    printf("Enter side 1: ");
    scanf("%f", &s1);
    printf("Enter side 2: ");
    scanf("%f", &s2);

    printf("Hypotenuse is: %f", hypotenuse(s1, s2));
}



double square(double num)
{
    return num * num;
}

double hypotenuse(double side1, double side2)
{
    return sqrt(square(side1) + square(side2));

}