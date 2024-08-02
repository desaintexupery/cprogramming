// Fig. 8.30: fig08_30.c
// Uso della funzione memcmp
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "ABCDEFG"; // inizializza l'array di char s1
    char s2[] = "ABCDXYZ"; // inizializza l'array di char s2

    printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n", "s1 = ", s1, "s2 = ", s2,
                                                    "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4),
                                                    "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7),
                                                    "memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7));
}