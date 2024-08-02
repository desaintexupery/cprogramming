// Fig. 8.29: fig08_29.c
// Uso della funzione memmove
#include <stdio.h>
#include <string.h>

int main(void)
{
    char x[] = "Home Sweet Home"; // inizializza l'array di char x

    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array x after memmove is: ", (char *) memmove(x, &x[5], 10));
}