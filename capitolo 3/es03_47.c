// Es. 3.47: es03_47.c
// Calcolare la frequenza cardiaca normale
// Mentre fate esercizi fisici, potete usare un monitor della frequenza cardiaca,
// per vedere se la vostra frequenza cardiaca stia entro un intervallo di sicurezza
// indicato dai vostri istruttori e medici. Secondo l'American Heart Association
// (AHA), la formula per calcolare la vostra massima frequenza cardiaca in battiti
// al minuto è 220 meno la vostra età. La vostra frequenza cardiaca normale è un
// intervallo che è il 50-80% della vostra massima frequenza cardiaca. [Nota: queste
// formule sono stime fornite dall'AHA. La massima e normale frequenza cardiaca
// possono variare a seconda della salute, del benessere e del sesso dell'individuo.
// Consultate sempre un medico o un professionista qualificato per l'assistenza
// sanitaria prima di cominciare o modificare il programma di un esercizio.] Create
// un programma che legga la data di nascita dell'utente e il giorno corrente (mese,
// giorno e anno). Il vostro programma deve calcolare e mostrare l'età della persona,
// la sua massima frequenza cardiaca e il suo intervallo di frequenza cardiaca normale.
#include <stdio.h>

int main(void)
{
    float meseNascita, meseCorrente;
    float giornoNascita, giornoCorrente;
    float annoNascita, annoCorrente;
    float età, bAM, freq_min, freq_max;
    

    printf("Inserire mese corrente: ");
    scanf("%f", &meseCorrente);
    printf("Inserire giorno corrente: ");
    scanf("%f", &giornoCorrente);
    printf("Inserire anno corrente: ");
    scanf("%f", &annoCorrente);
        printf("Inserire mese di nascita: ");
    scanf("%f", &meseNascita);
    printf("Inserire giorno di nascita: ");
    scanf("%f", &giornoNascita);
    printf("Inserire anno di nascita: ");
    scanf("%f", &annoNascita);

    if(giornoCorrente <= giornoNascita){
        --meseCorrente;
    }
    if(meseCorrente <= meseNascita){
        --annoCorrente;
    }
    età = annoCorrente - annoNascita;

    bAM = 220 - età;

    freq_min = bAM / 100 * 50;
    freq_max = bAM / 100 * 80;

    printf("La tua età è di %f anni.\n", età);
    printf("La tua frequenza cardiaca massima è di %f battiti al minuto.\n", bAM);
    printf("La tua frequenza cardiaca normale varia dai %f ai %f battiti al minuto.", freq_min, freq_max);

}