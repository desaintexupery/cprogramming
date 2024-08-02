// Fig. 5.20: es05_20.c
// Stampare un quadrato di un qualunque carattere
// Modificate la funzione realizzara nell'esercizio 5.19 per formare
// il quadrari con qualsiasi carattere contenuto nel parametro di tipo
// carattere fillCharacter. Così, se side è 5 e fillCharacter è "#",
// questa funzione deve stampare:
// #####
// #####
// #####
// #####
// #####
#include <stdio.h>

int quadrato(int side, char fillCharacter);

int main(void)
{
    int side; 
    char character;

    printf("%s", "Enter the side size: ");
    scanf("%d", &side);
    printf("%s", "Enter a character: ");
    scanf(" %c", &character);
    quadrato(side, character);
}

int quadrato(int side, char fillCharacter)
{
    int riga = 1;
    int colonna = 1;
    while(riga <= side){
    while(colonna <= side){
        printf("%c", fillCharacter);
        ++colonna;
    }
    colonna = 1;
    puts("");

    ++riga;
    }
}