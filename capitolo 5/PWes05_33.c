// Es. 5.33: es05_33.c
// Modifica a indovina il numero
// Modificate il programma dell'Esercizio 5.32 per contare il numero delle risposte
// date dal giocatore. Se il numero è 10 di meno, stampate "Either you know the
// secret or you got lucky!". Se il giocatore indovina il numero dopo dieci tentativi,
// allora stampate "Ahah! You know the secret!". Se il giocatore dà più di dieci risposte,
// allora stampate "You should be able to do better!". Perché dovrebbero volerci non più
// di 10 risposte? Ebbene, con ogni "risposta buona" il giocatore dovrebbe essere in grado
// di eliminare la metà dei numeri. Ora mostrate perché un numero da 1 a 1000 può essere
// indovinato in 10 o anche meno tentativi.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int casual();

int main(void)
{
    srand(time(NULL));

    int num;
    int guess;
    char choice;
    int tries = 0;

    num = casual();
    
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
    scanf("%d", &guess);

    while(guess != num){
        if(guess < num){
            ++tries;
            printf("Too low\n");
            printf("Type your guess: ");
            scanf("%d", &guess);
        }
        if(guess > num){
            ++tries;
            printf("Too high\n");
            printf("Type your guess: ");
            scanf("%d", &guess);                
        }
    }

    if(guess == num){
        printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?\n");
        choice = getchar();

        switch(choice){
          case 'y':
          case 'Y':
            tries = 0;
            printf("Type your guess: ");
            scanf("%d", &guess);
            
            while(guess != num){
                if(guess < num){
                    ++tries;
                    printf("Too low\n");
                    printf("Type your guess: ");
                    scanf("%d", &guess);
                }
                if(guess > num){
                    ++tries;
                    printf("Too high\n");
                    printf("Type your guess: ");
                    scanf("%d", &guess);                
                }
                if(guess == num){
                    printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?");
                    choice = getchar();
                }
            }
            break;
          case 'n':
          case 'N':
            break;
        }
    }

    if(tries < 10){
        printf("Either you know the secret or you got lucky!");
    }
    else if(tries = 10){
        printf("Ahah! You know the secret!");
    }
    else
        printf("You should be able to do better!");
}

int casual()
{
    int num = 1 + (rand() % 1000);
    return num;
}