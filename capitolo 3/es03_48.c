// Es. 3.48: es03_48.c
// Garantire la privacy con la crittografia
// La crescita esplosiva delle comunicazioni via Internet e la memorizzazione di dati
// sul computer connessi a Internet hanno aumentato di molto i timori riguardo alla 
// privacy. Il campo della crittografia si interessa alla codifica dei dati per rendere
// difficile (e speriamo - con gli schemi più avanzati - impossibile) la loro lettura da
// parte di utenti non autorizzati. In questo esercizio vi occuperete di uno schema
// semplice per criptare e decriptare dati. Un'azienda che vuole inviare dati su Internet
// vi ha chiesto di scrivere un programma per criptarli, così da poterli trasmettere con
// maggiore sicurezza. Tutti i dati sono trasmessi come numeri interi di quattro cifre.
// La vostra applicazione deve leggere un numero intero di quattro cifre inserito 
// dall'utente e criptarlo come segue: sostituire ogni cifra con il risultato ottenuto 
// aggiungendo 7 alla cifra e calcolando il resto dopo aver diviso il nuovo valore per 10.
// Poi scambiate la prima cifra con la terza e quindi la seconda con la quarta, per poi
// stampare il numero intero criptato. Scrivete un'applicazione separata che inserisca un
// numero intero criptato di quattro cifre e lo decripti (invertendo lo schema di criptazione)
// per ricostruire il numero originario. [Progetto di approfondimento opzionale: Nelle
// applicazioni a livello industriale, vorrete usare tecniche di crittografia più
// sofisticate rispetto a quelle presentate in questo esercizio. Fate una ricerca bibliografica
// sulla "crittografia a chiave pubblica" in generale e sullo schema specifico a chiave
// pubblica PGP (pretty good privacy). Potreste anche effettuare una ricerca sullo schema RSA,
// che è ampliamente usato nelle applicazioni a livello industriale.] 
#include <stdio.h>

int main(void)
{
    // criptazione

    int num;
    int num1, num2, num3, num4, num5;
    int ph1, ph2, ph3, ph4;

    printf( "Inserisci un numero intero di 4 cifre: " );
    scanf( "%d", &num );

    num1 = num / 1000;
    num2 = num % 1000 / 100;
    num3 = num % 100 / 10;
    num4 = num % 10;

    num1 += 7 % 10;
        num2 += 7 % 10;
            num3 += 7 % 10;
                num4 += 7 % 10;

    ph1 = num1;
    ph2 = num3;
    num1 = ph2;
    num3 = ph1;
    ph3 = num2;
    ph4 = num4;
    num2 = ph4;
    num4 = ph3;

    printf("%d%d%d%d\n", num1, num2, num3, num4);

    // decriptazione

    num1 = ph1;
    num2 = ph2;
    num3 = ph3;
    num4 = ph4;

    num1 -= 7;
    num2 -= 7;
    num3 -= 7;
    num4 -= 7;

    printf("%d%d%d%d\n", num1, num2, num3, num4);

}