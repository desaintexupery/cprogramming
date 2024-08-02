// Es 3.35: es03_35.c
// Stampare l'equivalente decimale di un numero binario
// Inserire un numero intero (di 5 cifre o meno) contenente soltanto zeri
// e uni (cioè un numero intero "binario") e stampate il suo equivalente
// decimale. [Suggerimento: usate gli operatori di divisione e resto per
// ottenere le cifre del numero "binario" una alla volta da destra a sinistra.
// Proprio come nel sistema numerico decimale, nel quale la cifra più a destra
// ha un valone di 1 e la successiva cifra a sinistra ha un valore posizionale
// di 10, poi di 100, poi di 1000 e così via, nel sistema numerico binario la
// cifra più a destra ha un valore posizionale di 1, la cifra successiva a 
// sinistra di 2, poi di 4, poi di 8 e così via. Allora il numero decimale 234
// si può interpretare come 4*1 + 3 * 10 + 2 * 100. L'equivalente decimale
// del binario 1101 è 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 ovvero 13.]
#include <stdio.h>

int main(void)
{
    int num;
    int num1, num2, num3, num4, num5;

    printf( "Inserisci un numero binario di 5 cifre o meno: " );
    scanf( "%d", &num );

    num1 = num / 10000;
    num2 = num % 10000 / 1000;
    num3 = num % 1000 / 100;
    num4 = num % 100 / 10;
    num5 = num % 10;

        num5 *= 1;
        num4 *= 2;
        num3 *= 4;
        num2 *= 8;
        num1 *= 16;
        num =  num1 + num2 + num3 + num4 + num5;

        printf("Il numero decimale corrispondente è: %d", num);

}
