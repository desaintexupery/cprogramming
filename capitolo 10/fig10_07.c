// Fig. 10.7: fig10_07.c
// Stampa di un int senza segno nella sua rappresentazione in bit
#include <stdio.h>

void displayBits(unsigned int value); // prototipo

int main(void)
{
    unsigned int x; // variabile per memorizzare l'input dell'utente

    printf("%s", "Enter a nonnegative int: ");
    scanf("%u", &x);

    displayBits(x);
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