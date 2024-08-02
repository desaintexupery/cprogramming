// Es. 4.27: es04_27.c
// Triple pitagoriche
// Un rettangolo rettangolo può avere i lati tutti interi. L'insieme di tre valori interi
// per i lati di un triangolo rettangolo è chiamato tripla pitagorica. Questi tre lati
// devono soddisfare la relazione per cui la somma dei quadrati di due lati è uguale al 
// quadrato dell'ipotenusa. Trovate tutte le triple pitagoriche per il lato 1 (side1), il
// lato due (side2) e l'ipotenusa, tutti non più grandi di 500. Usate un ciclo for annidato
// tre volte, che tenti semplicemente tutte le possibilità.
#include <stdio.h>
#include <math.h>

int main(void)
{
    for(int side1 = 1; side1 <= 500; side1++){
        for(int side2 = 1; side2 <= 500; side2++){
            for(int ipotenuse = 1; ipotenuse <= 500; ipotenuse++){
                if(pow(side1, 2) + pow(side2, 2) == pow(ipotenuse, 2)){
                    printf("%d, %d, %d\n", side1, side2, ipotenuse);
                }
            }
        }
    }
}