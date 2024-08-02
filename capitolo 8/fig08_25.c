// Fig. 8.25: fig08_25.c
// Uso della funzione strstr
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string1 = "abcdefabcdef"; // stringa da esaminare
    const char *string2 = "def"; // stringa da cercare

    printf("%s%s\n%s%s\n\n%s\n%s%s\n", "string1 = ", string1, "string2 = ", string2,
                                        "The remainder of string1 beginning with the",
                                        "first occurrence of string2 is: ",
                                        strstr(string1, string2));
}