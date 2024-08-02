// Fig 8.22: fig08_22.c
// Uso della funzione strpbrk
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string1 = "This is a test"; // inizializza string1
    const char *string2 = "beware"; // inizializza string2

    printf("%s\"%s\"\n'%c'%s\n\"%s\"\n", "Of the characters in ", string2,
                                    *strpbrk(string1, string2),
                                    " appears earliest in ", string1);
}