// Es. 3.24: es03_24.c
// Tabella di output
// Scrivete un programma che usi l'iterazione per stampare la
// seguente tabella di valori. Usate la sequenza di escape tab,
// \t, nell'istruzione printf per separare le colonne con
// tabulazioni.
// N    10*N    100*N   1000*N
//
// 1    10      100     1000
// 2    20      200     2000
// 3    30      300     3000
// 4    40      400     4000
// 5    50      500     5000
// 6    60      600     6000
// 7    70      700     7000
// 8    80      800     8000
// 9    90      900     9000
// 10   100     1000    10000
#include <stdio.h>

int main(void)
{
    int counter = 1;

    printf("N\t10*N\t100*N\t1000*N\n\n");

    while( counter <= 10 ) {
        printf("%d\t%d\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 1000 );
        counter++;
    }
}