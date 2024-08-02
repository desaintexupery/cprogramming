// Es. 6.19: es06_19.c
// Lancio dei dadi
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6

int rollDice(void);

int main(void)
{
    srand(time(NULL));

    int dice1, dice2;
    int totals[13] = {0};

    for(int rolls = 1; rolls <= 36000; rolls++){
	dice1 = rollDice();
	dice2 = rollDice();
	++totals[dice1 + dice2];
    }

for(int i = 1; i <= 6; ++i){
        if(i == 1){
            printf("\t");
            printf("%d\t", i);
        }
        else printf("%d\t", i);
}
for(int j = 1; j <= 6; ++j){
    
        if(j == 1){
            puts("");
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[2], totals[3], totals[4], totals[5], totals[6], totals[7]);
        }
        if(j == 2){ 
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[3], totals[4], totals[5], totals[6], totals[7], totals[8]);
        }
        if(j == 3){ 
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[4], totals[5], totals[6], totals[7], totals[8], totals[9]);
        }
        if(j == 4){ 
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[5], totals[6], totals[7], totals[8], totals[9], totals[10]);
        }
        if(j == 5){ 
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[6], totals[7], totals[8], totals[9], totals[10], totals[11]);
        }
        if(j == 6){ 
            puts("");
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", j, totals[7], totals[8], totals[9], totals[10], totals[11], totals[12]);
        }
    }
}




int rollDice(void)
{
    int die = 1 + (rand() % 6); 

    return die;
}