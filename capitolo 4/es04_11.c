// Es. 4.11: es04_11.c
// Trovare il valore più piccolo
// Scrivete un programma che trovi il più piccolo di diversi
// numeri interi. Supponete che il primo valore letto specifichi
// il numero dei restanti valori.
#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 1;
    int num;
    int min = 9999;

    printf("Enter the number of values: ");
    scanf("%d", &x);

    while(y<=x){
        printf("Enter a value: ");
        scanf("%d", &num);

        if(num <= min){
            min = num;}
            y++;
    }
    printf("Minimum value is %d", min);
}