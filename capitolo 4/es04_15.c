// Es. 4.15: es04_15.c
// Programma modificato per l'interesse composto
// Modificare il programma per l'interesse composto del Paragrafo 4.6
// in modo da ripetere i suoi passi per i tassi di interessse del 5%,
// 6%, 7%, 8%, 9% e 10%. Usate un ciclo for per variare il tasso di
// interesse.
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;
    double rate;

    for(double rate = .05; rate <= 0.1; rate += .01){
        printf("Rate: %4.2f\n\n", rate);
        
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for(unsigned int year = 1; year <= 10; ++year){
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%21.2f\n", year, amount);
        }
    }
}