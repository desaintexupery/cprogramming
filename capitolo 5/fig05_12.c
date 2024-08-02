// Fig. 5.12: fig05_12.c
// Lancio di un dado a sei facce 60.000.000 di volte.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int frequency1 = 0; // contatore per il valore 1
    unsigned int frequency2 = 0; // contatore per il valore 2
    unsigned int frequency3 = 0; // contatore per il valore 3
    unsigned int frequency4 = 0; // contatore per il valore 4
    unsigned int frequency5 = 0; // contatore per il valore 5
    unsigned int frequency6 = 0; // contatore per il valore 6

    // ripeti 60.000.000 di volte e riepiloga i risultati
    for(unsigned int roll = 1; roll <= 60000000; roll++){
        int face = 1 + rand() % 6; // numero casuale da 1 a 6

        // determina il valore di facce e incrementa il contatore appropriato
        switch(face){

            case 1: // valore 1
                ++frequency1;
                break;
            case 2: // valore 2
                ++frequency2;
                break;
            case 3: // valore 3
                ++frequency3;
                break;
            case 4: // valore 4
                ++frequency4;
                break;
            case 5: // valore 5
                ++frequency5;
                break;
            case 6: // valore 6
                ++frequency6;
                break; // opzionale
        }
    }
    
    // stampa i risultati in formato tabellare
    printf("%s%13s\n", "Face", "Frequency");
    printf("   1%13u\n", frequency1);
    printf("   2%13u\n", frequency2);
    printf("   3%13u\n", frequency3);
    printf("   4%13u\n", frequency4);
    printf("   5%13u\n", frequency5);
    printf("   6%13u\n", frequency6);
}