// Es. 5.18: es05_18.c
// Pari o dispari
// Scrivete un programma che riceva in ingressi una serie di interi
// e li passi uno alla volta alla funzione even, che usa l'operatore
// di resto per determinare se un intero è pari. La funzione deve
// prendere un argomento intero e restituire 1 se l'intero è pari e 0
// nel caso contrario.
#include <stdio.h>

int even(num);

int main(void)
{
    int n;
    
    printf("%s", "Enter an integer: ");
    scanf("%d", &n);

    while(n != EOF){
        even(n);
        printf("%s", "Enter an integer: ");
        scanf("%d", &n);
    }
}

int even(num)
{
    if(num % 2 == 0){
        return 1;
    }
    else return 0;
}