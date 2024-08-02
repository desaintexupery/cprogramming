// Fig. 8.35: fig08_35.c
// Uso della funzione strlen
#include <stdio.h>
#include <string.h>

int main(void)
{
    // inizializza 3 puntatori a char
    const char *string1 = "abcdefghijklmnopqrstuvwxyz";
    const char *string2 = "four";
    const char *string3 = "Boston";

    printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\"%s\"%s%u\n",
            "The lenght of ", string1, " is ", strlen(string1),
            "The lenght of ", string2, " is ", strlen(string2),
            "The lenght of ", string3, " is ", strlen(string3));
}