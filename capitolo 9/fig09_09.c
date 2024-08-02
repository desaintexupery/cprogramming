// Fig. 9.09 fig09_09.c
// Stampa di interi, numeri in virgola mobile e stringhe
#include <stdio.h>

int main(void)
{
    puts("Using precision for intergers");
    int i = 873; // inizializza int i
    printf("\t%.4d\n\t%.9d\n\n", i, i);

    puts("Using precision for floating-point numbers");
    double f = 123.94536; // inizializza double f
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

    char s[] = "Happy Birthday"; // inizializza l'array di char s
    printf("\t%.11s\n", s);  
}