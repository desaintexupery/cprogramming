#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contiene il prototipo per la funzione time

// le costanti di enumerazione rappresentano lo stato del gioco
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // prototipo di funzione
int craps(void);

int main(void)
{
    int bankBalance = 1000;
    int wager;
    
    printf("%s", "Enter your wager: ");
    scanf("%d", &wager);

    if(wager < 50){
        printf("%s", "Aw cmon, take a chance!\n");
    }

    while(wager > bankBalance){
        printf("%s", "Enter a valid wager: ");
        scanf("%d", &wager);
    }

    while(wager <= bankBalance){

        craps();

        if(craps() == 1){
            bankBalance += wager;
            printf("New balance = %d", bankBalance);

            if(bankBalance > 1500){
                printf("%s", "You're up big. Now's the time to cash in your chips!\n");
            }
        }
        if(craps() == 0){
            bankBalance -= wager;
            printf("New balance = %d", bankBalance);
            if(bankBalance <= 0){
                printf("%s", "Sorry. You busted!\n");
            }
            if(bankBalance < 150 && bankBalance > 0){
                printf("%s", "Oh, you're going for broke, huh?\n");
            }
        }


    }
}



int rollDice(void)
{
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6); 

   
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; 
}

int craps(void)
{
    srand(time(NULL));

    int myPoint;
    enum Status gameStatus; 
    int sum = rollDice(); 

  
    switch(sum){
    case 7: 
    case 11: 
        gameStatus = WON;
        break;
    
   
    case 2: 
    case 3: 
    case 12:
        gameStatus = LOST;
        break;


    default:
        gameStatus = CONTINUE; 
        myPoint = sum; 
        printf("Point is %d\n", myPoint);
        break; 
    }

    while(CONTINUE == gameStatus){ 
        sum = rollDice(); 
        

        if(sum == myPoint){ 
            gameStatus = WON;
        }
        else {
            if(7 == sum){ 
            gameStatus = LOST;
            }
        }
    }


    if(WON == gameStatus){ 
        puts("Player wins");
        return 1;
    }
    else{ 
        puts("Player loses");
        return 0;
    }
}