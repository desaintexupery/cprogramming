// Fig. 8.20: fig08_20.c
// Uso della funzione strchr
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string = "This is a test"; // inizializza string
    char character1 = 'a'; // inizializza character1
    char character2 = 'z'; // inizializza character2

    // se character1 è stato trovato in string
    if(strchr(string, character1) != NULL){
        printf("\'%c\' was found in \"%s\".\n", character1, string);
    }
    else{ // se character1 non è stato trovato
        printf("\'%c\' was not found in \"%s\".\n", character1, string);
    }

    // se character2 è stato trovato in string
    if(strchr(string, character2) != NULL){
        printf("\'%c\' was found in \"%s\".\n", character2, string);
    }
    else{ // se character2 non è stato trovato
        printf("\'%c\' was not found in \"%s\".\n", character2, string);
    }   
}