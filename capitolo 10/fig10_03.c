// Fig. 10.3: fig10_03.c
// Programma per mescolare e distribuire le carte con uso di strutture
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// definizione della struttura card
struct card{
    const char *face; // definisci il puntatore face
    const char *suit; // definisci il puntatore suit
};

typedef struct card Card; // nuovo nome di tipo per struct card

// prototipi
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{
    Card deck[CARDS];

    // inizzializza un array di puntatori
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
                            "Nine", "Ten", "Jack", "Queen", "King"};

    // inizializza un array di puntatori
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL)); // randomizza

    fillDeck(deck, face, suit); // carica il mazzo con le carte
    shuffle(deck); // metti le carte in ordine casuale
    deal(deck); // distribuisci tutte le 52 carte
}

// metti le stringhe nelle strutture Card
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[])
{
    // effettua un'iterazione attraverso wDeck
    for(size_t i = 0; i < CARDS; ++i){
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// mescola le carte
void shuffle(Card * const wDeck)
{
    // effettua un'iterazione attraveros wDeck scambiando a caso le carte
    for(size_t i = 0; i < CARDS; ++i){
        size_t j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// distribuisci le carte
void deal(const Card * const wDeck)
{
    // effettua un'iterazione attraverso wDeck
    for(size_t i = 0; i < CARDS; ++i){
        printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
    }
}