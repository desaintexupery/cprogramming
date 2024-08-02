// Es. 5.52: es05_52.c
// Istruzione assistita da computer: monitorare le prestazioni dello studente
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num1(void);
int num2(void);

int yes(void);
int no(void);


int main(void){

    srand(time(NULL));

    int answer, wrongs = 0, rights = 0;  

    for(int i; i <= 10; ++i){
    int n1 = num1();
    int n2 = num2();    
    
    printf("How much is %d times %d? ", n1, n2);
    scanf("%d", &answer);


    while(n1 * n2 != answer){
        no();
        scanf("%d", &answer);
        ++wrongs;
        ++i;
    }

    if(n1 * n2 == answer){
        yes();
        ++rights;
    }
    }

    if(rights >= 7.5){
        puts("Congratulations, you are ready to go to the next level!");
    }
    else{
        puts("Please ask your teacher for extra help.");
    }
}

int num1(void)
{
    int num1 = 0 + (rand() % 9);
    return num1;
}

int num2(void)
{
    int num2 = 0 + (rand() % 9);
    return num2;
}

int yes(void)
{
    int num = 1 + (rand() % 4);

    switch(num){
        case 1:
            puts("Very good!");
            break;
        case 2:
            puts("Excellent!");
            break;
        case 3:
            puts("Nice work!");
            break;
        case 4:
            puts("Keep up the good work!");
            break;
        default:
            break;
    } 
}

int no(void)
{
    int num = 1 + (rand() % 4);

    switch(num){
        case 1:
            puts("No. Please try again.");
            break;
        case 2:
            puts("Wrong. Try once more.");
            break;
        case 3:
            puts("Don't give up!");
            break;
        case 4:
            puts("No. Keep trying.");
            break;
        default:
            break;
    } 
}