// Es. 5.32: es05_32.c
// Indovina il numero
// Scrivete un programma in C che realizzi il gioco "indivina il numero" come segue:
// il vostro programma sceglie il numero da indovinare selezionando a caso un intero
// nell'intervallo da 1 a 1000. Il programma quindi stampa:
// I have a number between 1 and 1000.
// Can you guess my number?
// Please type your first guess.
// Il giocatore allora scrive una prima risposta. Il programma risponde con una delle
// seguenti frasi:
// 1. Excellent! You guessed the number!
//    Would you like to play again (y or n)?
// 2. Too low. Try again.
// 3. Too high. Try again.
// Se la risposta del giocatore è sbagliata, il vostro programma deve entrare in un
// ciclo finché il giocatore non indovina finalmente il numero giusto. Deve continuare
// a dire al giocatore "Too high" o "Too low" per aiutarlo a "convergere" sulla risposta
// corretta. [Nota: la tecnica di ricerca impiegata in questo problema è chiamata ricerca
// binaria. Ne diremo di più nel prossimo problema.]
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

    num = casual();
    
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
    scanf("%d", &guess);

    while(guess != num){
        if(guess < num){
            printf("Too low\n");
            printf("Type your guess: ");
            scanf("%d", &guess);
        }
        if(guess > num){
            printf("Too high\n");
            printf("Type your guess: ");
            scanf("%d", &guess);                
        }
    }

    if(guess == num){
        printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?");
        choice = getchar();

        switch(choice){
          case 'y':
          case 'Y':
            printf("Type your guess: ");
            scanf("%d", &guess);
            
            while(guess != num){
                if(guess < num){
                    printf("Too low\n");
                    printf("Type your guess: ");
                    scanf("%d", &guess);
                }
                if(guess > num){
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
}

int casual()
{
    int num = 1 + (rand() % 1000);
    return num;
}