// Es. 4.10: es04_10.c
// Calcolare la media di una sequenza di interi
// Scrivete un programama che calcoli e stampi la media di diversi
// numeri interi. Supponete che l'ultimo valore letto con scanf
// sia la sentinella 9999. Una tipica sequenza di input potrebbe
// essere
// 10 8 11 7 9 9999
// che indica che va calcolata la media di tutti i valori che
// precedono 9999.
#include <stdio.h>

int main()
{
    int x = 0; 
    int num;
    int sum = 0;
    float average = 0;
    
    printf("Enter some integers and I'll calculate their average(enter 9999 to exit): ");
    scanf("%d", &num);
    
    while(num != 9999) {
        sum += num;
        x++;
        scanf("%d", &num);
    }
    
    average = (float) sum / x;
    
    printf("\nThe average of the entered numbers is %f\n", average);
    
    return 0;
}