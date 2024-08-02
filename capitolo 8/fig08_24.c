// Fig. 8.24: fig08_24.c
// Uso della funzione strspn
#include <stdio.h>
#include <string.h>

int main(void)
{
    // inizializza due puntatori a char
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehi lsTuv";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n", "string1 = ", string1, "string2 = ", string2,
                                        "The lenght of the initial segment of string1",
                                        "containing only characters from string2 = ",
                                        strspn(string1, string2));
}