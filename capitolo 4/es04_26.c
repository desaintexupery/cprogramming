// Es. 4.26: es04_26.c
// Calcolo del valore di π
// Calcolate il valore di π in base alla serie infinita
// π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
// Stampate una tabella che mostri il valore di π approssimaro da un termine di questa
// serie, da due termini, da tre termini, e così via. Quanti termini di questa serie
// dovete usare per otteenere i valori 3,14? 3,141? 3,1415? 3,14159?
#include <stdio.h>

int main(void)
{
    double pi = 0, x;
    double pinum = 4;
    double denom = 1;

    printf("Step\tValue of Pi\n");

    for(int step = 1; step <= 100; step++){
            if(step % 2 == 0){
                pi -= pinum / denom;
                denom += 2;
            }
            else if(step % 2 != 0){
                pi += pinum / denom;
                denom += 2;
            }
            printf("%d\t%lf\n", step, pi);
        }
    }