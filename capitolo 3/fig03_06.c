// Fig. 3.6: fig03_06.c
// Media di una classe con l'iterazione controllata da contatore.
#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main( void )
{
    unsigned int counter; // numero del prossimo voto da inserire
    int grade; // valore del voto
    int total; // somma dei voti inseriti dall'utente
    int average; // media dei voti

    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 1; // inizialiazza il contatore del ciclo

    // fase di elaborazione
    while ( counter <= 10 ) { // ripeti 10 volte
        printf( "%s", "Enter grade: " ); // prompt per l'ingresso
        scanf( "%d", &grade ); // leggi il voto
        total = total + grade; // somma il voto al totale
        counter = counter + 1; // incrementa il contatore
    } // fine di while

    // fase di terminazione 
    average = total / 10; // divisione intera

    printf( "Class average is %d\n", average ); // stampa il risultato
} // fine della funzione main