// Fig. 8.15: fig08_15.c
// Uso delle funzioni strcpy e strncpy
#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main(void)
{
    char x[] = "Happy Birthday to You"; // inizializza l'array x di char
    char y[SIZE1]; // crea un array y di char
    char z[SIZE2]; // crea un array z di char

    // copia il contenuto di x in y
    printf("%s%s\n%s%s\n",
        "The string in array x is: ", x,
        "The string in array y is: ", strcpy(y, x));

    // copia i primi 14 caratteri di x in z. Non copia il carattere
    // nullo
    strncpy(z, x, SIZE2 - 1);

    z[SIZE2 - 1] = '\0'; // termina la stringa in z
    printf("The string in array z is: %s\n", z);
}