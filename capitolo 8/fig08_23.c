// Fig. 8.23: fig08_23.c
// Uso della funzione strrchr
#include <stdio.h>
#include <string.h>

int main(void)
{
    // inizializza un puntatore a char
    const char *string1 = "A zoo has many animals including zebras";

    int c = 'z'; // carattere da cercare

    printf("%s\n%s'%c'%s\"%s\"\n", "The remainder of string1 beginning with the",
                                    "last occurrence of charcater ", c,
                                    " is: ", strrchr(string1, c));
}