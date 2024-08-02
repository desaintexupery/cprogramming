// Fig. 9.14 fig09_14.c
// Uso del flag spazio # con gli specificatori di conversione
// o, x, X e qualsiasi specificatore di valori in virgola mobile
#include <stdio.h>

int main(void)
{
    int c = 1427; // inizializza c
    printf("%#o\n", c);
    printf("%#x\n", c);
    printf("%#X\n", c);

    double p = 1427.0; // inizializza p
    printf("\n%g\n", p);
    printf("%#g\n", p);
}