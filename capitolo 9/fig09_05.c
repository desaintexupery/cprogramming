// Fig. 9.5 fig09_05.c
// Uso degli specificatori di conversione di caratteri e stringhe
#include <stdio.h>

int main(void)
{
    char character = 'A'; // inizializza un char
    printf("%c\n", character);

    printf("%s\n", "This is a string");

    char string[] = "This is a string"; // inizializza un array di char
    printf("%s\n", string);

    const char *stringPtr = "This is also a string"; // puntatore a char
    printf("%s\n", stringPtr);
}