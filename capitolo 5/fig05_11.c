// Fig. 5.11: fig05_11.C
// Interi casuali con spostamento e variazione di scala.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ripeti 20 volte
    for(unsigned int i = 1; i <= 20; ++i){

        // scegli un numero casuale da 1 a 6 e stampalo
        printf("%10d", 1 + rand() % 6);

        // se il contatore è divisibile per 5, inizia una nuova riga
        if(i % 5 == 0){
            puts("");
        }
    }
}