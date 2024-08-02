// Fig. 5.14: fig05_14.c
// Simulazione del gioco del craps.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contiene il prototipo per la funzione time

// le costanti di enumerazione rappresentano lo stato del gioco
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // prototipo di funzione

int main(void)
{
    // randomizza il generatore di numeri casuali
    srand(time(NULL));

    int myPoint; // il giocatore deve fare questo punteggio per vincere
    enum Status gameStatus; // può contenere CONTINUE, WON o LOST
    int sum = rollDice(); // primo lancio dei dadi

    // determina lo stato del gioco in base alla somma dei dadi
    switch(sum){
    case 7: // si vince con 7
    case 11: // si vince con 11
        gameStatus = WON;
        break;
    
    // si perde al primo lancio
    case 2: // si perde con 2
    case 3: // si perde con 3
    case 12: // si perde con 12
        gameStatus = LOST;
        break;

    // ricorda il punteggio
    default:
        gameStatus = CONTINUE; // il giocatore continua a lanciare
        myPoint = sum; // ricorda il punteffio
        printf("Point is %d\n", myPoint);
        break; // opzionale
    }

    // finché il gioco non si conclude
    while(CONTINUE == gameStatus){ // il gioco continua
        sum = rollDice(); // lancia di nuovo i dadi
        
        // determina lo stato del gioco
        if(sum == myPoint){ // si vince facendo il punteggio
            gameStatus = WON;
        }
        else {
            if(7 == sum){ // si perde lanciando il 7
            gameStatus = LOST;
            }
        }
    }

    // stampa il messaggio di vincita o di perdita
    if(WON == gameStatus){ // il giocatore ha vinto?
        puts("Player wins");
    }
    else{ // il giocatore ha perso
        puts("Player loses");
    }
}

// lancia i dadi, calcola la somma e stampa i risultati
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // valore a caso per il primo dado
    int die2 = 1 + (rand() % 6); // valore a caso per il secondo dado

    // stampa i risultati di questo lancio
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // restituisci la somma dei dadi
}