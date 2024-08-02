// Es. 3.40: es03_40.c
// Multipli di 2 con un ciclo infinito
// Scrivete un programma che continui a stampare i multipli del numero intero 2,
// e cioè 2, 4, 8, 16, 32, 64 e così via. Il vostro ciclo non deve terminare (ossia,
// dovete creare un ciclo infinito). Cosa succede quando fate eseguire questo
// programma?
#include <stdio.h>

int main(void)
{
    int num = 1;

    while(2 == 2){
        printf("%d\n", num * 2);
        num++;
    }
}