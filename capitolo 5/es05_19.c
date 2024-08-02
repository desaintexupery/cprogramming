// Es. 5.19: es05_19.c
// Quadrato di asterischi
// Scrivete una funzione che stampi un quadrato di asterischi pieno
// il cui lato è specificato nel parametro intero side. Ad esempio,
// se side è 4, la funzione stampa:
// ****
// ****
// ****
// ****
#include <stdio.h>

int quadrato(side);

int main(void)
{
    int side;

    printf("%s", "Enter the side size: ");
    scanf("%d", &side);
    quadrato(side);
}

int quadrato(side)
{
    int riga = 1;
    int colonna = 1;
    while(riga <= side){
    while(colonna <= side){
        printf("*");
        ++colonna;
    }
    colonna = 1;
    puts("");

    ++riga;
    }
}