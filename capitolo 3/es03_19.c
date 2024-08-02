// Es. 3.19: es03_19.c
// Calcolo degli interessi
// L'interesse semplice su un prestito è calcolato con la formula
// interest = principal * rate * days / 365
// La precedente formula presume che rate sia il tasso di interesse
// annuale, e quindi effettua la divisione per 365 (giorni).
// Sviluppate un programma che legga i valori per le variabili principal,
// rate e days per diversi prestiti e calcoli e stampi l'interesse 
// semplice per ogni prestito, usando la formula precedente.
// Ecco un esempio di dialogo di input/output:
// Enter loan principal (-1 to end): 1000.00
// Enter interest rate: .1
// Enter term of the loan in days: 365
// The interest charge is $100.00
//
// Enter loan principal (-1 to end): 1000.00
// Enter interest rate: .08375
// Enter term of the loan in days: 224
// The interest charge is $51.40
//
// Enter loan principal (-1 to end): -1
#include <stdio.h>

int main(void)
{
    float principal;
    float rate;
    float days;
    float interest;

    printf( "Enter the loan principal (-1 to end): " );
    scanf( "%f", &principal );

    while ( principal != -1 )
    {
        printf( "Enter interest rate: " );
        scanf( "%f", &rate );
        printf( "Enter term of the loan in days: " );
        scanf( "%f", &days );
        
        interest = principal * rate * days / 365;

        printf( "The interest charge is $%f\n\n", interest );
    printf( "Enter the loan principal (-1 to end): " );
    scanf( "%f", &principal );
    }
    
}