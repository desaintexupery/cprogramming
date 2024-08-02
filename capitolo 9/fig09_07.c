// Fig. 9.7 fig09_07.c
// Uso degli specificatori di conversione p e %
#include <stdio.h>

int main(void)
{
    int x = 12345; // inzializza int x
    int *ptr = &x; // assegna l'indirizzo di x a ptr

    printf("The value of ptr is %p\n", ptr);
    printf("The address of x is %p\n\n", &x);

    puts("Printing a %% in a format control string\n");
}