// Es. 4.19: es04_18.c
// Programma che stampa un grafico a barre
// Un'applicazione interessante dei computer è quella che disegna grafici
// e grafici a barre.  Scrivere un programma che legga cinque numeri
// (ognuno tra 1 e 30). Per ogni numero letto, il vostro programma deve
// stampare una riga contenente quel numero di asterischi contigui.
// Ad esempio, se il vostro programma legge il numero sette, deve
// stampare *******.
#include <stdio.h>

int main(void)
{
    int num = 0;

        for(int x = 1; x <= 5; x++){
            printf("Enter an integer (1-30): ");
            scanf("%d", &num);
                if(num > 30){
                printf("Number is too big");}
            else for(int y = 1; y <= num; y++){
                printf("%s", "*");
            }
            printf("\n");
        }
 }

