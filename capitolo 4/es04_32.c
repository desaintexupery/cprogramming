// Es. 4.32: es04_32.c
// Programma che stampa un rombo modificato
// Modificate il programma scritto nell'Esercizio 4.31 per leggere un numero dispari
// compreso nell'intervallo da 1 a 19 per specificare il numero di righe del rombo.
// Il vostro programma dovrebbe poi visualizzare un rombo della dimensione appropriata.
#include <stdio.h>

int main()
{
    int i, j, k;
    int rows, max;
    
    printf("Enter number of rows(1-19): ");
    scanf("%d", &rows);

        if(rows <= 19){
    if(rows==1) {
        printf( "*" );
        printf( "\n" );
    } 
    
    max = rows / 2;

    if(rows % 2 == 0)
        max -= 1;
    

    for(i = 0; i <= max; i++) 
    {
        for(j = 0; j < (max-i); j++)
            printf( " " ); 
        for(k = 0; k < (1 + (i * 2)); k++)
            printf( "*" );
        printf( "\n" );
    }

    if(rows % 2 == 0)
        max += 1;

    for(i = max - 1; i >= 0; i--) 
    {

        if(rows % 2 == 0)
            j = 1;
        else
            j = 0;

        for( ; j < (max - i); j++) {
            printf( " " ); 
        }
            
        for(k = 0; k < (1 + (i * 2)); k++)
            printf( "*" );
        printf( "\n" );
    }
    }
    if(rows> 19){
        printf("Enter a number between 1 and 19.");
    }
}