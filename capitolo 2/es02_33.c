// Es. 2.33: es02_33.c
// Calcolatore del risparmio nel car pooling
// Ricercate diversi siti web riguardanti il car pooling
// (utilizzazione condivisa di un'automobile). Create
// un'applicazione che calcoli quanto spendete quotidianamente
// in carburante, così che possiate valutare quanto denaro
// potreste risparmiare con il car pooling, cosa che ha anche
// altri vantaggi, come quello di ridurre le emissioni di
// carburante e la congestione del traffico. L'applicazione
// deve ricevere in ingresso le seguenti informazioni e
// mostrare la spesa giornaliera dell'utente per andare al
// lavoro in auto:
// a) Miglia totali percorse al giorno.
// b) Costo del carburante al gallone.
// c) Media delle miglia per gallone.
// d) Costo del parcheggio al giorno.
// e) Pedaggi al giorno.
#include <stdio.h>

int main( void )
{
    int migliaAlGiorno;
    int carbAlGallone;
    int mediaPerGallone;
    int parkAlGiorno;
    int pedAlGiorno;

    float CO2PerGallone;
    float CostCarbGiorno;
    float CostCarbAnno;
    float CostGiorno;

    printf( "%s", "Inserire le miglia totali percorse al giorno: " );
    scanf( "%d", &migliaAlGiorno );
    printf( "%s", "Inserire il costo del carburante al gallone: " );
    scanf( "%d", &carbAlGallone );
    printf( "%s", "Inserire la media delle miglia per gallone: " );
    scanf( "%d", &mediaPerGallone );
    printf( "%s", "Inserire il costo del parcheggio al giorno: " );
    scanf( "%d", &parkAlGiorno );
    printf( "%s", "Inserire il costo dei pedaggi al giorno: " );
    scanf( "%d", &pedAlGiorno );

    CostCarbGiorno = (mediaPerGallone * migliaAlGiorno) / carbAlGallone;
    printf( "Al giorno, spendi %f dollari in carburante.\n", CostCarbGiorno );
    CostCarbAnno = CostCarbGiorno * 365;
    printf( "All'anno, spendi %f dollari di carburante.\n", CostCarbAnno );
    printf( "%s", "Con il car pooling, risparmi almeno 450 dollari di carburante all'anno\n\n" );

    CostGiorno = CostCarbGiorno + parkAlGiorno + pedAlGiorno;
    printf( "Al giorno, in totale spendi %f dollari.\n", CostGiorno );
    printf( "%s", "Con il car pooling è un bel risparmio!\n\n");

    CO2PerGallone = carbAlGallone * 8.7;
    printf( "%s", "Un gallone di benzina produce 8,7 kg di CO2.\n" );
    printf( "Hai prodotto %f kg di CO2.\n", CO2PerGallone );
    printf( "%s", "Con il car pooling, le emissioni di CO2 si riducono del 26 percento!\n" );

}