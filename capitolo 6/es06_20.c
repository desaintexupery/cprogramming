// Es. 6.20: es06_20.c
// Gioco del craps
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

enum Status { CONTINUE, WON, LOST };

int rollDice(void);
int craps(void);

int main(void)
{
    srand(time(NULL));
    int won = 0;
    int lost = 0;

    for(int i = 1; i <= 100; ++i){
        if(craps() == 1){
            ++won;
        }
        else{
            ++lost;
        }    
    }

        printf("Won games: %d\n", won);

        printf("Lost games: %d\n", lost);

}

int craps(void)
{

    int myPoint;
    enum Status gameStatus; 
    int sum = rollDice();

    switch(sum){
    case 7: 
    case 11: 
        gameStatus = WON;
        return 1;
        break;

    case 2: 
    case 3: 
    case 12: 
        gameStatus = LOST;
        return 0;
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
            return 1;
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

int rollDice(void)
{
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6); 

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; 
}