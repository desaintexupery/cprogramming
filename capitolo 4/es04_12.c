// Es. 4.12: es04_12.c
// Calcolare la somma di numeri interi pari
// Scrivete un programma che calcoli e stampi la somma degli interi
// pari da 2 a 30.
#include <stdio.h>

int main(void)
{
    int somma = 0;

    for(int x = 2; x <= 30; x++){
        if(x % 2 == 0){
            somma += x;
        }
        continue;
    }
    printf("Somma degli interi pari da 2 a 30 = %d", somma);
}