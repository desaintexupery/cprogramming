// Fig. 7.17: fig07_17.c
// Uso dell'operatore sizeof con i tipi di dati standard.
#include <stdio.h>

int main(void)
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20]; // crea un array di 20 elementi int
    int *ptr = array; // crea un puntatore all'array

    printf("      sizeof c = %u\tsizeof(char)  = %u"
           "\n      sizeof s = %u\tsizeof(short) = %u"
           "\n      sizeof i = %u\tsizeof(int) = %u"
           "\n      sizeof l = %u\tsizeof(long) = %u"
           "\n     sizeof ll = %u\tsizeof(long long) = %u"
           "\n      sizeof f = %u\tsizeof(float) = %u"
           "\n      sizeof d = %u\tsizeof(double) = %u"
           "\n     sizeof ld = %u\tsizeof(long double) = %u"
           "\n  sizeof array = %u"
           "\n    sizeof ptr = %u\n",
           sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
           sizeof(int), sizeof l, sizeof(long), sizeof ll, 
           sizeof(long long), sizeof f, sizeof(float), sizeof d,
           sizeof(double), sizeof ld, sizeof(long double),
           sizeof array, sizeof ptr);
}