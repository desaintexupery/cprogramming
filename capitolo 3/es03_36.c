// Es. 3.36: es03_36.c
// Quanto è veloce il vostro computer?
// Come potete davvero stabilire con quale velocità operi il vostro
// computer? Scrivete un programma con un ciclo while che conti da 1
// a 1.000.000.000 per incrementi di uno. Ogni volta che il ciclo
// raggiunge un multiplo di 100.000.000, stampate quel numero sullo schermo.
// Usate il vostro orologio per cronometrare quanto tempo impiega ogni
// ciclo di 100 milioni di iterazioni.
#include <stdio.h>

int main(void)
{
    int counter = 1;

    while(counter <= 1000000000){
        if(counter % 100000000 == 0){
            printf("%d\n", counter);
        }
        counter++;
    }
}