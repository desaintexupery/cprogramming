// Es. 7.12: es07_12.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES], int *array_suits, int *array_faces);
void deal(int *array_faces, int *array_suits, unsigned int wDeck[][FACES]);
bool pair(int *array_faces);
bool dpair(int *array_faces);
bool tris(int *array_faces);
bool poker(int *array_faces);
bool color(int *array_suits);
bool straight(int *array_faces);
void bubblesort(int *array, size_t lunghezza);

int main(void)
{
    unsigned int deck[SUITS][FACES] = {0}; // Changed to unsigned int

    int array_faces[5] = {0};
    int array_suits[5] = {0};

    srand(time(NULL));
    shuffle(deck, array_suits, array_faces);

    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    deal(array_faces, array_suits, deck);

    printf("Dealt cards:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s of %s\n", face[array_faces[i]], suit[array_suits[i]]);
    }

    bool coppia = pair(array_faces);
    bool dcoppia = dpair(array_faces);
    bool troppia = tris(array_faces);
    bool quattro = poker(array_faces);
    bool colore = color(array_suits);
    bool scala = straight(array_faces);

    if (coppia == true) {
        printf("\n\nTra le cinque carte c'è una coppia\n");
    } else {
        printf("\n\nTra le cinque carte non c'è una coppia\n");
    }
    if (dcoppia == true) {
        printf("\nTra le cinque carte c'è una doppia coppia\n");
    } else {
        printf("\nTra le cinque carte non c'è una doppia coppia\n");
    }
    if (troppia == true) {
        printf("\nTra le cinque carte c'è un tris\n");
    } else {
        printf("\nTra le cinque carte non c'è un tris\n");
    }
    if (quattro == true) {
        printf("\nTra le cinque carte ce ne sono quattro uguali\n");
    } else {
        printf("\nTra le cinque carte non ce ne sono quattro uguali\n");
    }
    if (colore == true) {
        printf("\nLe cinque carte formano un colore\n");
    } else {
        printf("\nLe cinque carte non formano un colore\n");
    }
    if (scala == true) {
        printf("\nLe cinque carte formano una scala\n");
    } else {
        printf("\nLe cinque carte non formano una scala\n");
    }
}

void shuffle(unsigned int wDeck[][FACES], int *array_suits, int *array_faces)
{
    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row;
        size_t column;

            array_suits[card] = rand() % SUITS;
            array_faces[card] = rand() % FACES;

        wDeck[array_suits[card]][array_faces[card]] = card;
    }
}

void deal(int *array_faces, int *array_suits, unsigned int wDeck[][FACES])
{  

    int faccia, seme;

    for(size_t card = 0; card < 5; ++card){

        while(true){
            faccia = rand() % FACES;
            seme = rand() % SUITS;

            if(card == 0)
                break;

            bool found = false;
            for(size_t x = 0; x < card; ++x){
                if(array_faces[x] == faccia && array_suits[x] == seme){
                    found = true;
                    break;
                }
            }
            if(found == false){
                break;
            }
        }

        array_faces[card] = faccia;
        array_suits[card] = seme;
    }
}


bool pair(int *array_faces)
{
    for (size_t card = 0; card < 4; ++card) {
        int counter = 0;
        for (size_t x = card + 1; x < 5; ++x) {
            if (array_faces[card] == array_faces[x]) {
                ++counter;
            }
        }
        if (counter == 1) {
            return true;
        }
    }
    return false;
}

bool dpair(int *array_faces)
{
    int counter2 = 0;
    for (size_t card = 0; card < 4; ++card) {
        int counter = 0;
        for (size_t x = card + 1; x < 5; ++x) {
            if (array_faces[card] == array_faces[x]) {
                ++counter;
            }
        }
        if (counter == 1) {
            ++counter2;
        }
    }
    if (counter2 == 2) {
        return true;
    }
    return false;
}

bool tris(int *array_faces)
{
    for (size_t card = 0; card < 3; ++card) {
        int counter = 0;
        for (size_t x = card + 1; x < 5; ++x) {
            if (array_faces[card] == array_faces[x]) {
                ++counter;
            }
        }
        if (counter == 2) {
            return true;
        }
    }
    return false;
}

bool poker(int *array_faces)
{
    for (size_t card = 0; card < 2; ++card) {
        int counter = 0;
        for (size_t x = card + 1; x < 5; ++x) {
            if (array_faces[card] == array_faces[x]) {
                ++counter;
            }
        }
        if (counter == 3) {
            return true;
        }
    }
    return false;
}

bool color(int *array_suits)
{
    for (size_t x = 1; x < 5; ++x) {
        if (array_suits[0] != array_suits[x]) {
            return false;
        }
    }
    return true;
}

void bubblesort(int *array, size_t lunghezza)
{
    for (size_t x = 0; x < lunghezza - 1; ++x) {
        for (size_t y = 0; y < lunghezza - 1; ++y) {
            if (array[y] > array[y + 1]) {
                int hold = array[y];
                array[y] = array[y + 1];
                array[y + 1] = hold;
            }
        }
    }
}

bool straight(int *array_faces)
{
    bubblesort(array_faces, 5);
    for (size_t x = 1; x < 5; ++x) {
        if (array_faces[x] != array_faces[x - 1] + 1) {
            return false;
        }
    }
    return true;
}
