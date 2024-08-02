// Fig. 8.26: fig08_26.c
// Uso della funzione strtok
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "This is a sentence with 7 tokens";

    printf("%s\n%s\n\n%s\n", "The string to be tokenized is:", string, "The tokens are:");

    char *tokenPtr = strtok(string, " "); // trova il primo token

    // continua a suddividere la stringa in token finché tokenPtr non diventa NULL
    while(tokenPtr != NULL){
        printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, " "); // trova il token successivo
    }
    
}