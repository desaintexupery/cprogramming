// Es. 5.50: es05_50.c
// Istruzione assistita da computer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num1(void);
int num2(void);

int main(void){

    srand(time(NULL));

    int answer;    
    int n1 = num1();
    int n2 = num2();

    printf("How much is %d times %d? ", n1, n2);

    scanf("%d", &answer);



    while(n1 * n2 != answer){
        puts("No. Please try again");
        scanf("%d", &answer);
    }

    if(n1 * n2 == answer){
        puts("Very good!");
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