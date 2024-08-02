// Fig. 8.31: fig08_31.c
// Uso della funzione memchr
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s = "This is a string"; // inizializza il puntatore s

    printf("%s\'%c\'%s\"%s\"\n", "The remainder of s after character ", 'r',
                                " is found is ", (char *) memchr(s, 'r', 16));
}