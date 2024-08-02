// Fig. 4.6: fig04_06.c
// Calcolo dell'interesse composto
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; // capitale iniziale
    double rate = .05; // tasso di interesse annuale

    // stampa le intestazioni delle colonne della tabella
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calcola la quantità in deposito per ognuno dei dieci anni
    for (unsigned int year = 1; year <= 10; ++year) {

        // calcola la nuova quantità per un anno specifico
        double amount = principal * pow(1.0 + rate, year);

        // stampa una riga della tabella
        printf("%4u%21.2f\n", year, amount);
    }
}