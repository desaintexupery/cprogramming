// Es. 5.24: es05_24.c
// Conversioni di temperatura
// Implementate le seguenti funzioni intere:
// a) La funzione toCelsius restituisce l'equivalente in gradi Celsius di una
//    temperatura in gradi Fahrenheit.
// b) La funzione toFahrenheit restituisce l'equivalente in gradi Celsius di una
//    temperatura in gradi Celsius.
// c) Usate queste funzioni per scrivere un programma che stammi diagrammi che
//    mostrino gli equivalenti gradi Fahrenheit di tutte le temperature in gradi
//    Celsius di tutte le temperature in gradi Celsius da 0 a 100 gradi e gli
//    equivalenti gradi Celsius di tutte le temperature in gradi
//    Fahrenheit di tutte le temperature in gradi Celsius da 32 a 212 gradi.
//    Stampate gli output in un formato tabellare che minimizzi il numero delle
//    righe di output, pur rimanendo ancora leggibile.
#include <stdio.h>

float toCelsius(float a);
float toFahrenheit(float b);

int main(void)
{
    printf("%s", "CELSIUS\tFAHRENHEIT\n");
    for(int i = 0; i <= 100; ++i){
        printf("%d\t\t%f\n", i, toFahrenheit(i));
    }
    
    puts("");

    printf("%s", "FAHRENHEIT\tCELSIUS\n");
    for(int j = 32; j <= 212; ++j){
        printf("%d\t\t%f\n", j, toCelsius(j));
    }
}

float toCelsius(float a)
{
    return (a - 32.0) * (5.0/9.0);
}

float toFahrenheit(float b)
{
    return b * (9/5) + 32;
}