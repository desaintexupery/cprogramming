// Fig. 4.7: fig04_07.c
// Conteggio dei voti a lettera con switch
#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade; // un voto

    // ripeti finché l'utente non immette la sequenza di end-of-file
    while((grade = getchar()) != EOF) {

        // determina quale voto è stato inserito
        switch (grade) { // switch annidato nel while
        
            case 'A':// il voto è la lettera maiuscola A
            case 'a': // o la lettera minuscola a
                ++aCount;
                break; // necessario per uscire dallo switch

            case 'B': // il voto è la lettera maiuscola B
            case 'b': // o la lettera minuscola b
                ++bCount;
                break;

            case 'C': // il voto è la lettera maiuscola C
            case 'c': // o la lettera minuscola c
                ++cCount;
                break;

            case 'D': // il voto è la lettera maiuscola D
            case 'd': // o la lettera minuscola d
                ++dCount;
                break;

            case 'F': // il voto è la lettera maiuscola F
            case 'f': // o la lettera minuscola f
                ++fCount;
                break;

            case '\n': // ignora i newline,
            case '\t': // le tabulazioni
            case ' ': // e gli spazi in input
                break;

            default: // cattura tutti gli altri caratteri
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break; // opzionale; uscirà comunque dallo switch
            }
    } // fine di while

    // stampa il riepilogo dei risultati
    puts("\nTotals for each grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}