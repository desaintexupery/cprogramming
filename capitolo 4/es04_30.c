// Es. 4.30: es04_30.c
// Sostituzione di switch con if...else
// Riscrivete il programma della Figura 4.7 sostituendo l'istruzione switch con un'istruzione
// annidata if...else; fate attenzione a trattare adeguatamente il caso default. Quindi
// riscrivete questa nuova versione sostituendo l'istruzione annidata if...else con una serie
// di istruzioni if; qui fate anche attenzione a trattare adeguatamente il caso default (ciò è
// più difficile rispetto alla versione annidata if...else). Questo esercizio dimostra che lo
// switch è una comodità e che qualunque istruzione switch può essere scritta soltanto con
// istruzioni di selezionee singola.
#include <stdio.h>

int main(void)
{
        int grade;
        int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;
    
    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while((grade = getchar()) != EOF)
    {
        if(grade=='A' || grade=='a')
        {
            ++aCount;
        }
        else if(grade=='B' || grade=='b')
        {
            ++bCount;
        }
        else if(grade=='C' || grade=='c')
        {
            ++cCount;
        }
        else if(grade=='D' || grade=='d')
        {
            ++dCount;
        }
        else if(grade=='F' || grade=='f')
        {
            ++fCount;
        }
        else if(grade == '\n' || grade == '\t' || grade == ' ')
        {
        }
        else {
            printf("Incorrect letter grade entered.\n");
            printf("Enter a new grade.\n");
        }
    }
    printf("Totals for each letter grade are:\n");
    printf("A: %d\n", aCount);    
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);    
    printf("F: %d\n", fCount);    
    

}