// Fig. 10.9: fig10_09.c
// Uso degli operatori bit a bit AND, OR inclusivo,
// OR esclusivo e complemento
#include <stdio.h>

void displayBits(unsigned int value); // prototipo

int main(void)
{
    // illustra l'AND (&) bit a bit
    unsigned int number1 = 65535;
    unsigned int mask = 1;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(mask);
    puts("using the bitwise AND operator & is");
    displayBits(number1 & mask);

    // illustra l'OR inclusivo (|) bit a bit
    number1 = 15;
    unsigned int setBits = 241;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(setBits);
    puts("using the bitwise inclusive OR operator | is");
    displayBits(number1 | setBits);

    // illustra l'OR esclusivo (^) bit a bit
    number1 = 139;
    unsigned int number2 = 199;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(number2);
    puts("using the bitwise exclusive OR operator ^ is");
    displayBits(number1 ^ number2);

    // illustra il complemento (~) bit a bit
    number1 = 21845;
    puts("The one's complement of");
    displayBits(number1);
    puts("is");
    displayBits(~number1);
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