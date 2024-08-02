// Es. 3.37: es03_37.c
// Trovare multipli di 10
// Scrivete un programma che stampi 100 asterischi uno alla volta.
// Dopo ogni decimo asterisco, il programma deve stampare un carattere
// newline. [Suggerimento: contate da 1 a 100. Usate l'operatore di
// resto per riconoscere quando il contatore raggiunge un multiplo di 10.]
#include <stdio.h>

int main(void)
{
    int counter = 1;

    while(counter <= 100){
        printf("*");
        if(counter % 10 == 0){
            printf("\n");
        }
    counter++;
    }
}