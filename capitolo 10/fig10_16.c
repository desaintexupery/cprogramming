// Fig. 10.16: fig10_16.c
// Rappresentazione di carte con campi di bit di una struttura
#include <stdio.h>
#define CARDS 52

// definizione della struttura bitCard con campi di bit
struct bitCard {
    unsigned int face : 4; // 4 bit; 0-15
    unsigned int suit : 2; // 2 bit; 0-3
    unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCard Card; // nuovo nome di tipo per la struttura

void fillDeck(Card * const wDeck); // prototipo
void deal(const Card * const wDeck); // prototipo

int main(void)
{
    Card deck[CARDS]; // crea un array di Card

    fillDeck(deck);

    puts("Card values 0-12 correspond to Ace through King");
    puts("Card values 0-3 correspond Hearts, Diamonds, Clubs and Spades");
    puts("Card values 0-1 correspond to red and black\n");
    deal(deck);
}

// inizializza l'array di Card
void fillDeck(Card * const wDeck)
{
    // effettua un'iterazione attraverso wDeck
    for(size_t i = 0; i < CARDS; ++i){
        wDeck[i].face = i % (CARDS / 4);
        wDeck[i].suit = i / (CARDS / 4);
        wDeck[i].color = i / (CARDS / 2);
    }
}


// stampa le carte nel formato a due colonne; le carte 0-25 indicizzate con
// k1 (colonna 1); le carte 26-51 indicizzate con k2 (colonna 2)
void deal(const Card * const wDeck)
{
    printf("%-6s%-6s%-15s%-6s%-6s%s\n", "Card", "Suit", "Color",
                                        "Card", "Suit", "Color");

    // effettua l'iterazione attraverso wDeck
    for(size_t k1 = 0, k2 = k1 + 26; k1 < CARDS /2; ++k1, ++k2){
        printf("%3d   %2d   %2d\t\t   ",
            wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
        printf("%3d   %2d   %2d  \n",
            wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
    }
}