// Fig. 7.7: fig07_07.c
// Eleva al cubo una variabile usando il passaggio per riferimento.

#include <stdio.h>

void cubeByReference(int *nPtr); // prototipo di funzione

int main(void)
{
    int number = 5; // inizializza number

    printf("The original value of number is %d", number);

    // passa l'indirizzo di number a cubeByReference
    cubeByReference(&number);

    printf("\nThe new value of number is %d\n", number);
}

// eleva al cubo *nPtr; di fatto modifica number in main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; // calcola il cubo di *nPtr
}