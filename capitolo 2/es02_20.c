// Es. 2.20: es02_20.c
// (Diametro, circonferenza e area di un cerchio)
// Scrivete un programma che legga il raggio di un cerchio
// e stampi il diametro, la circonferenza e l'area
// del cerchio. Usate il valore costante 3,14159 per π.
// Effettuate ognuno di questi calcoli all'interno
// dell'istruzione printf e usate lo specificatore di
// conversione %f [Nota: in questo capitolo abbiamo esaminato
// soltanto le costanti e le variabili intere. Nel capitolo 3
// esamineremo i numeri in virgola mobile, cioè i valori che
// possono avere punti decimali.]
#include <stdio.h>

int main( void )
{
    float raggio;
    float pi = 3.14159;

    printf( "Inserisci il valore del raggio: " );
    scanf( "%f", &raggio );

    printf( "Diametro: %f\n", 2 * raggio );
    printf( "Circonferenza: %f\n", 2 * pi * raggio );
    printf( "Area: %f", pi * raggio * raggio );

}