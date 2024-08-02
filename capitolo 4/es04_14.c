// Es. 4.14: es04_14.c
// Fattoriali
// La funzione fattoriale è usata frequentemente nei problemi che
// riguardano la probabilità. Il fattoriale di un intero positivo n
// (scritto n! e pronunciato "n fattoriale") è uguale al prodotto
// degli interi positivi da 1 a n. Scrivete un programma che calcoli
// i fattoriali defli interi da 1 a 5 e stampate i risultati in forma
// di tabella. Cosa potrebbe impedirvi di calcolare il fattoriale di
// 20?
#include <stdio.h>

int main(void)
{
    int fact = 1;

    printf("\t1\t2\t3\t4\t5\n");

    printf("!\t");
    for(int x = 1; x <= 5; x++){
            fact *= x;
        printf("%d\t", fact);
    }
}