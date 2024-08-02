// Es. 4.8: es04_08.c
#include <stdio.h>

int main(void)
{
    unsigned int x;
    unsigned int y;

    // stampa il prompt per l'input dell'utente
    printf("%s", "Enter two unsigned integers in the range 1-20: ");
    scanf("%u%u", &x, &y); // legge i valori per x e y

    for (unsigned int i = 1; i <= y; ++i) { // conta da 1 a y

        for (unsigned int j = 1; j <= x; ++j) { // conta da 1 a x
            printf("%s", "@");
        }

        puts(""); // inizia una nuova riga
    }
}