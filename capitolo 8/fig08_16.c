// Fig. 8.16: fig08_16.c
// Uso delle funzioni strcat e strncat
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20] = "Happy "; // inizializza l'array di char s1
    char s2[] = "New Year "; // inizializza l'array di char s2
    char s3[40] = ""; // inizializza l'array di char s3 come vuoto

    printf("s1 = %s\ns2 = %s\n", s1, s2);

    // aggiungi s2 in coda a s1
    printf("strcat(s1, s2) = %s\n", strcat(s1, s2));

    // aggiungi i primi 6 caratteri di s1 in coda a s3. Inserisci '\0'
    // dopo l'ultimo carattere
    printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

    // aggiungi s1 in coda a s3
    printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
}