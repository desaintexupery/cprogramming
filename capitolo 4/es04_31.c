// Es. 4.31: es03_31.c
// Programma che stampa un rombo
// Scrivete un programma che stampi la seguente forma a rombo. Potete usare delle istruzioni
// printf che stampano un singolo asterisco (*) o un singolo spazio. Massimizzate l'uso
// dell'iterazione (con istruzioni annidate for) e minimizzate il numero di istruzioni printf.
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>

int main()
{
    
    int max = 4;
    
    for(int i = 0; i <= max; i++) 
    {
        for(int j = 0; j < (max - i); j++)
            printf(" ");
        for(int k = 0; k < (1 + (i * 2)); k++)
            printf("*");
        puts("");
    }

    for(int i = max - 1; i >= 0; i--) 
    {
        for(int j = 0; j < (max - i); j++)
            printf(" ");
        for(int k = 0; k < (1 + (i * 2)); k++)
            printf("*");
        puts("");
    }
    
}
