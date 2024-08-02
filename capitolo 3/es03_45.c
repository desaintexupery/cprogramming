// Es. 3.45: es03_45.c
// Fattoriale
// Il fattoriale di un numero intero non negativo n si scrive n!
// (pronunciato "n fattoriale") ed è definito come segue:
//    n! = n * (n-1) * (n-2) * ... * 1 (per valori di n maggiori
//         o uguali a 1)
// e
//    n! = 1 (per n = 0).
// Ad esempio, 5! = 5 * 4 * 3 * 2 * 1, che è 120.
// a) Scrivete un programma che legga un numero intero non negativo
//    e calcoli e stampi il suo fattoriale.
// b) Scrivete un programma che valuti il valore della costante
//    matematica e usando la formula:
//    e = 1 + 1/1! + 1/2! + 1/3! + ...
// c) Scrivete un programma che calcoli il valore di e^x usando la
//    formula:
//    e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
#include <stdio.h>
#include <math.h>

int main(void)
{
// a)
    float n,i,f;
    f=i=1;

    printf("Inserisci un numero per trovare il suo fattoriale: ");
    scanf("%f",&n);

    while(i<=n)
    {
        f*=i;
        i++;
    }

    printf("Il suo fattoriale è: %f\n", f);

// b)

    float e=1;
    float x=1;
    f=1;
    i=1;
    

    printf("Inserisci un numero per trovare il valore della costante e: ");
    scanf("%f",&n);


    while(i<=n)
         {
            f*=i;
            x = 1/f;
            e+=x;
            i++;
            }

    printf("La costante e è: %f\n", e);

// c)

    float e_x=1;
    float j=1;
    i=f=x=1;

    printf("Inserisci un numero x per trovare il valore di e^x: ");
    scanf("%f", &x);
    printf("Inserisci un numero n da fattorizzare per trovare il valore di e^x: ");
    scanf("%f", &n);

    while(i<=n)
    {
        f*=i;
        j = pow(x, i)/f;
        e_x+=j;
        i++;
    }
    printf("Il valore di e^%f è: %f", x, e_x);

}