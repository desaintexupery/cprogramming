// Fig. 9.4: fig09_04.c
// Uso degli specificatori di conversione di numeri in virgola mobile
#include <stdio.h>

int main(void)
{
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89); //  non viene stampato il segno più
    printf("%e\n", -1234567.89); // viene stampato il segno meno
    printf("%E\n", 1234567.89); 
    printf("%f\n", 1234567.89); // sei cifre a destra del punto decimale
    printf("%g\n", 1234567.89); // stampa con la lettera minuscola e
    printf("%G\n", 1234567.89); // stampa con la lettera maiuscola E
}