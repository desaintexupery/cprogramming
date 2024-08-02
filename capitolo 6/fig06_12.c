// Fig. 6.12: es06_12.c
// Il nome di un array coincide con l'indirizzo del suo primo elemento.
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    char array[5]; // definisci un array di dimensione 5

    printf("    array = %p\n&array[0] = %p\n   &array = %p\n", array, &array[0], &array);        
}
