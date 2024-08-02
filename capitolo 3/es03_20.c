// Es. 3.20: es03_20.c
// Calcolo del salario
// Sviluppate un programma per calcolare lo stipendio lordo
// di ciascuno dei diversi impiegati. L'azienda paga quanto
// previsto all'ora per "l'orario lavorativo normale" per le
// prime 40 ore di lavoro e paga "una volta e mezza" per tutte
// le ore di lavoro oltre le 40 ore. Vi vengono dati una lista
// degli impiegati dell'azienda, il numero di ore in cui 
// l'impiegato ha lavorato l'ultima settimana e la paga oraria
// di ogni impiegato. Il vostro programma deve leggere queste
// informazioni per ogni impiegato e determinare e stampare
// lo stipendio lordo. Ecco un esempio di dialogo di input/output:
// Enter # of hours worked (-1 to end): 39
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $390.00
//
// Enter # of hours worked (-1 to end): 40
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $400.00
// 
// Enter # of hours worked (-1 to end): 41
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $415.00
//
// Enter # of hours worked (-1 to end): -1
#include <stdio.h>

int main(void)
{
    float hours;
    float hrate;
    float salary;
    float extra;

    printf( "Enter # of hours worked (-1 to end): " );
    scanf( "%f", &hours );

    while( hours != -1 ){

        printf( "Enter hourly rate of the worker ($00.00): " );
        scanf( "%f", &hrate );

        if( hours <= 40 ){
        salary = hours * hrate;
        }

        if( hours > 40 ){
            extra = (hours - 40) * hrate * 1.5;
            salary = 40 * hrate + extra;
        } 

        printf( "Salary is $%f\n\n", salary );

        printf( "Enter # of hours worked (-1 to end): " );
        scanf( "%f", &hours );
    }
}