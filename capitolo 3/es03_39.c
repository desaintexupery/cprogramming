// Es. 3.39: es03_39.c
// Modello di scacchiera di asterischi
// Scrivete un programma che stampi la seguente configurazione a scacchiera:
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * * 
//  * * * * * * * *
// * * * * * * * * 
//  * * * * * * * *
// Il vostro programma deve usare solamente tre istruzioni di output, ciascuna
// rispettivamente della forma seguente:
// printf( "%s", "* " );
// printf( "%s", " " );
// puts( "" ); // stampa un newline
#include <stdio.h>

int main(void)
{

    int counterRiga = 1;
    int counterColonna = 1;

    while(counterRiga <= 8){
        counterColonna = 1;
        while(counterColonna <= 8){
        if(counterRiga % 2 != 0 ){
        printf( "%s", "* " );}
        counterColonna++;
        }
        if(counterRiga % 2 == 0){
            printf( "%s", " " );
            counterColonna = 1;
            while(counterColonna <= 8){
            printf( "%s", "* " );
            counterColonna++;
        }
        }
        puts( "" );
        counterRiga++;
    }
}

