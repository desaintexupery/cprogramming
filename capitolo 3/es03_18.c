// Es. 3.18: es03_18.c
// Calcolo delle commissioni sulle vendite
// Una grande compagnia chimica paga il suo personale addetto
// alle vendite su commissione. Il personale addetto alle vendite
// riceve 200 dollari alla settimana più il 9% delle vendite lorde
// per quella settimana. Ad esempio, un addetto alle vendite che
// vende 5000 dollari di prodotti chimici in una settimana riceve
// 200 dollari più il 9% di 5000, cioè un totale di 650 dollari.
// Sviluppate un programma che legga le vendite lorde di ogni
// addetto alle vendite nell'ultima settimana e calcoli e stampi
// i guadagni di quell'addetto. Elaborate i dati di ogni addetto
// alla volta. Ecco un esempio di dialogo di input/output:
// Enter sales in dollars (-1 to end): 5000.00
// Salary is: $650.00
// Enter sales in dollars (-1 to end): 1234.56
// Salary is $311.11
// Enter sales in dollars (-1 to end): -1
#include <stdio.h>

int main(void)
{
    float sales;
    float percentage;
    float salary;

    printf( "Enter sales in dollars (-1 to end): " );
    scanf( "%f", &sales );

    while( sales != -1 ) {
        
    percentage = sales / 100 * 9;
    salary = 200 + percentage;
            printf( "Salary is: $%f\n", salary );
            printf( "Enter sales in dollars (-1 to end): " );
            scanf( "%f", &sales );
    }
}