// Es. 3.25: 3_25.c
// Tabella di output
// Scrivete un programma che utilizzi l'iterazione per produrre
// la seguente tabella di valori:
// A    A+2     A+4     A+6
//
// 3    5       7       9
// 6    8       10      12
// 9    11      13      15
// 12   14      16      18
// 15   17      19      21
#include <stdio.h>

int main(void)
{
    int counter = 3;

    printf("A\tA+2\tA+4\tA+6\n");

    while (counter <= 15) {
        printf("%d\t%d\t%d\t%d\n", counter, counter + 2, counter + 4, counter + 6);
        counter= counter + 3;
    }
}