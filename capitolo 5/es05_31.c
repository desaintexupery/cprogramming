//  Es. 5.31: es05_31.c
// Lancio di una moneta
// Scrivete un programma che simuli il lancio di una moneta. Per ogni lancio
// della moneta il programma deve stampare head(testa) o tail(croce). Fate
// lanciare al programma la moneta 100 volte e contate il numero di volte in
// cui compare ogni lato della moneta. Stampate i risultati. Il programma deve
// chiamare una funzione separata flip che non riceve alcun argomento e 
// restituisce 0 per croce e 1 per testa, [Nota: se il proggramma simula in
// maniera realistica il lancio della moneta, allora ogni lancio della moneta
// deve comparire approssimatamente la metà delle volte, per un totale di
// approssimatamente 50 teste e 50 croci.]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

int main(void)
{
    srand(time(NULL));
    int ttot = 0;
    int htot = 0;

    for(int i = 1; i <= 100; ++i){
        int side = flip();

        if (side == 0){
            ++ttot;
        }
        if (side == 1){
            ++htot;
        }
    }

    printf("HEADS TOTAL: %d\n", htot);
    printf("TAILS TOTAL: %d", ttot);
}

int flip()
{
    int side = 0 + (rand() % 2);

    return side;
}