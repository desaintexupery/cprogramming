// Es. 4.9: es04_09.c
// Somma di una sequenza di interi
// Scrivete un programma che sommi una sequenza di interi. Supponete
// che il primo intero letto con scanf specifichi il numero di valori
// che restano da inserire. Il vostro programma deve leggere solo un
// valore a ogni esecuzione di scanf. Una tipica sequenza di input
// potrebbe essere
// 5 100 200 300 400 500
// dove il 5 indica che i cinque valori successivi si devono sommare.
#include <stdio.h>

int main(void)
{
    int x, y;
    int num = 0;

    printf("Enter the number of integers to sum: ");
    scanf("%d", &x);

    for(int y = 1; y <= x; ++y) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        num += num;
    }

    printf("The sum is %d", num);
}