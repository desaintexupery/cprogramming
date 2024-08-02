// Fig. 7.24: fig07_24.c
// Mescolare e distribuire le carte.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototipi
void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);

int main(void)
{
    // inizializza l'array deck
    unsigned int deck[SUITS][FACES] = {0};

    srand(time(NULL)); // seme per i numeri casuali
    shuffle(deck); // mescola il mazzo

    // inizializza l'array suit
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    // inizializza l'array face
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    deal(deck, face, suit); // distribuisci il mazzo
}

// mescola le carte nel mazzo
void shuffle(unsigned int wDeck[][FACES])
{
    // per ogni carta, scegli a caso un elemento dell'array del mazzo
    for(size_t card = 1; card <= CARDS; ++card){
        size_t row; // numero della riga
        size_t column; // numero della colonna

        // scegli una locazione a caso non occupata
        do{
            row = rand() % SUITS;
            column = rand() % FACES;
        }while(wDeck[row][column] != 0);

        // inserisci il numero d'ordine della carta nell'elemento scelto
        wDeck[row][column] = card;
    }
}

// distribuisci le carte nel mazzo
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
    // distribuisci ognuna delle carte
    for(size_t card = 1; card <= CARDS; ++card){
        // effettua un ciclo lungo le righe di wDeck
        for(size_t row = 0; row < SUITS; ++row){
            // effettua un ciclo lungo le colonne di wDeck
            for(size_t column = 0; column < FACES; ++column){
                // se l'elemento contiene la carta corrente, stampala
                if(wDeck[row][column] == card){
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); // formato a due colonne
                }
            }
        }
    }
}