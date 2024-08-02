// Es. 3.34: es03_34.c
// Tester di palindromi
// Un palindromo è un numero o una frase di un testo che si legge all'indietro
// e in avanti. Ad esempio, ognuno dei seguenti numeri interi a cinque cifre
// è un palindromo: 12321, 55555, 45554, 11611. Scrivete un programma che legga
// un numero intero di cinque cifre e determini se sia o meno un palindromo.
// [Suggerimento: usate gli operatori di divisione e resto per separare il numero
// nelle sue cifre individuali.]
#include <stdio.h>

int main(void)
{
    int num;
    int num1, num2, num3, num4, num5;

    printf( "Inserisci un numero di 5 cifre: " );
    scanf( "%d", &num );

    num1 = num / 10000;
    num2 = num % 10000 / 1000;
    num3 = num % 1000 / 100;
    num4 = num % 100 / 10;
    num5 = num % 10;

    while(num / 10000 != 0){
    if(num1 == num5 && num2 == num4){
        puts("Il numero inserito è un palindromo.");
    }
    else
    puts("Il numero inserito non è un palindromo.");
    num = 1;
    }
}