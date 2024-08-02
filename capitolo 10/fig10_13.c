// Fig. 10.13: fig10_13.c
// Uso degli operatori di spostamento bit a bit 
#include <stdio.h>

void displayBits(unsigned int value); // prototipo

int main(void)
{
    unsigned int number1 = 960; // inizializza number1

    // illustra lo spostamento a sinistra bit a bit
    puts("\nThe result of left shifting");
    displayBits(number1);
    puts("8 bit positions using the left shift operator << is");
    displayBits(number1 << 8);

    // illustra lo spostamento a destra bit a bit
    puts("\nThe result of right shifting");
    displayBits(number1);
    puts("8 bit positions using the right shift operator >> is");
    displayBits(number1 >> 8);
}

// mostra i bit di un valore int senza segno
void displayBits(unsigned int value)
{
    // definisci displayMask ed effettua uno spostamento a sinistra di 31 bit
    unsigned int displayMask = 1 << 31;

    printf("%10u = ", value);

    // effettua un'iterazione attraverso tutti i bit
    for(unsigned int c = 1; c <= 32; ++c){
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // sposta value a sinistra di 1 bit

        if(c % 8 == 0){ // stampa uno spazio dopo 8 bit
            putchar(' ');
        }
    }

    putchar('\n');
}