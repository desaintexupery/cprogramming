// Fig. 5.13: fig05_13.c
// Randomizzare il programma del lancio del dado.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int seed; // seme per il generatore di numeri casuali

    printf("%s", "Enter seed: ");
    scanf("%u", &seed); // si noti %u per un unsigned int

    srand(seed); // fornisci il seme al generatore di numeri casuali

    // ripeti 10 volte
    for(unsigned int i = 1; i <= 10; ++i){

        // scegli un numero casuale da i a 6 e stampalo
        printf("%10d", 1 + (rand() % 6));

        // se il contatore è divisibile per 5, inizia una nuova riga
        if(i % 5 == 0){
            puts("");
        }
    }
}