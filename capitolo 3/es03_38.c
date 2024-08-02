// Es. 3.38: es03_38.c
// Contare i 7
// Scrivete un programma che legga un numero intero (di 5 cifre o meno)
// e determini e stampi quante cifre uguali a 7 ci sono nel numero.
#include <stdio.h>

int main(void)
{
    int counter = 0;
    int num;
    int num1, num2, num3, num4, num5;

    printf( "Inserisci un numero intero di 5 cifre o meno: " );
    scanf( "%d", &num );

    num1 = num / 10000;
    num2 = num % 10000 / 1000;
    num3 = num % 1000 / 100;
    num4 = num % 100 / 10;
    num5 = num % 10;

    if(num1 == 7){
        counter++;
    } 
    if(num2 == 7){
        counter++;
    }
    if(num3 == 7){
        counter++;
    }
    if(num4 == 7){
        counter++;
    } 
    if(num5 == 7){
        counter++;
    }

    printf("Nel numero sono presenti %d sette", counter);
}