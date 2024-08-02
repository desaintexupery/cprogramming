// Fig. 10.2: fig10_02.c
// Operatore di membro di struttura e
// operatore di puntatore a struttura
#include <stdio.h>

// definizione della struttura card
struct card{
    char *face; // definisci il puntatore face
    char *suit; // definisci il puntatore suit
};

int main(void)
{
    struct card aCard; // definisci una variabile di tipo struct card

    // inserisci le stringhe in aCard
    aCard.face = "Ace";
    aCard.suit = "Spades";

    struct card *cardPtr = &aCard; // assegna l'indirizzo di aCard a cardPtr

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
                                        cardPtr->face, " of ", cardPtr->suit,
                                        (*cardPtr).face, " of ", (*cardPtr).suit);
}