// Es. 4.17: es04_17.c
// Calcolare i limiti di credito
// Accumulare denaro diventa sempre più difficile in periodi di recessione,
// così le compagnie possono diminuire i loro limiti di credito per evitare
// che i loro conti creditori (il denaro loro dovuto) diventino troppo
// grandi. In risposta a una prolungata recessione, un'azienda ha dimezzato
// i limiti di credito dei suoi clienti. In questo modo, se un particolare
// cliente aveva un limite di credito di $2000, questo è adesso di $1000.
// Se un cliente aveva un limite di credito di $5000, ora è di $2500.
// Scrivete un programma che analizzi lo status di tre clienti di questa
// azienda. Per ogni cliente vi sono dati:
// a) Il numero di conto del cliente.
// b) Il limite di credito del cliente prima della recessione.
// c) Il saldo attuale di credito del cliente (cioè l'ammontare che il
//    cliente deve all'azienda).
// Il vostro programma deve calcolare e stampare il nuovo limite di credito
// per ciascun cliente e determinare (e stampare) quali clienti hanno il
// saldo attuale di credito che supera i loro nuovi limiti di credito.
#include <stdio.h>

int main(void)
{
    float saldo, limitePrima, limiteOra;

    for(int x = 1; x <= 3; x++){
        printf("Numero conto: %d\n", x);
        printf("Inserire il limite di credito del cliente prima della recessione: ");
        scanf("%f", &limitePrima);
        printf("Inserire il saldo attuale di credito del cliente: ");
        scanf("%f", &saldo);

        limiteOra = limitePrima / 2;

        printf("Il nuovo limite di credito del cliente %d è di %f.\n", x, limiteOra);
        if(saldo >= limiteOra){
            printf("Il saldo attuale supera il nuovo limite di credito.\n");
        }
    }
}