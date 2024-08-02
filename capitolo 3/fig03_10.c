// Fig. 3.10: fig03_10.c
// Analisi dei risultati dell'esame
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main( void )
{
    // inizializza le variabili nelle definizioni
    unsigned int passes = 0; // numero di promozioni
    unsigned int failures = 0; // numero di bocciature
    unsigned int student = 1; // contatore del numero di studenti
    int result; // un risultato dell'esame

    // processa 10 studenti usando un ciclo controllato da contatore
    while ( student <= 10 ) {

        // richiedi all'utente un valore in ingresso
        printf( "%s", "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );

        // se il risultato è 1, incrementa il numero di promozioni
        if ( result == 1 ) {
            passes = passes + 1;
        } // fine di if
        else { // altrimenti, incrementa il numero di bocciature
            failures = failures + 1;
        } // fine di else

        student = student + 1; // incrementa il contatore degli studenti
    } // fine di while

    // fase di terminazione, stampa i risultati
    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    // decidi se stampare "Bonus to instructor!"
    if ( passes > 8 ) {
        puts( "Bonus to instructor!" );
    } // fine di if
} // fine della funzione main