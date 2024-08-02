// Es. 4.21: es04_21.c
// Riscrivete il programma della Figura 4.2 in modo che la definizione 
// e l'inizializzazione della variabile counter vengano fatte prima 
// dell'istruzione for, per stampare il valore di counter dopo il
// termine del ciclo.
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;

    for(counter; counter <= 10; ++counter){}
    
    printf("%u\n", counter);
}