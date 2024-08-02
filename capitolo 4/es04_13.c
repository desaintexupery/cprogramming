// Es. 4.13: es04_13.c
// Calcolare il prodotto di numeri interi dispari
// Scrivete un programma che calcoli e stampi il prodotto degli
// interi dispari da 1 a 15.
#include <stdio.h>

int main(void)
{
    int prodotto = 1;

    for(int x = 1; x <= 15; x++){
        if(x % 2 != 0){
            prodotto *= x;
        }
        continue;
    }
    printf("Prodotto degli interi dispari da 1 a 15 = %d", prodotto);
}