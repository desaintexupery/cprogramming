// Es. 4.41: es04_41.c
// Alternative al piano tasse; la "Tassa Equa"
// Vi sono molte proposte per rendere le tasse più eque. Per informazioni sull'iniziativa
// Tassa Equa negli Stati Uniti visitate il sito
// www.fairtax.org
// Fate ricerche su come funziona la Tassa Equa. Un suggerimento è quello di eliminare le
// imposte sul reddito e la maggior parte delle altre tasse a favore di un 23% di imposta
// sui consumi su tutti i prodotti e servizi che acquistate. Alcuni oppositori alla Tassa
// Equa contestano la percentuale del 23% e dicono che, per via del modo in cui viene
// calcolata la tassa, sarebbe più esatto dire che la percentuale dobrebbe essere del 30%.
// Controllate ciò attentamente. Scrivete un programma che richieda all'utente di inserire
// le spese effettuate in varie categorie (es. alloggio, generi alimentari, abbigliamento,
// trasporti, educazione, assistenza sanitaria, vacanze), quindi stampate la Tassa Equa
// stimata che la persona pagherebbe.
#include <stdio.h>

int main(void)
{
    double alloggio, genali, abbigliamento, trasporti, educazione, asssan, vacanze;
    double tax = 0.23;
    double aftertax = 0;

    puts("Inserire la spesa effettuata questa settimana in");
    puts("Alloggio: ");
    scanf("%lf", &alloggio);
    puts("Generi alimentari: ");
    scanf("%lf", &genali);
    puts("Abbigliamento: ");
    scanf("%lf", &abbigliamento);
    puts("Trasporti: ");
    scanf("%lf", &trasporti);
    puts("Educazione: ");
    scanf("%lf", &educazione);
    puts("Assistenza sanitaria: ");
    scanf("%lf", &asssan);
    puts("Vacanze: ");
    scanf("%lf", &vacanze);

    aftertax = (alloggio + genali + abbigliamento + trasporti + educazione +asssan + vacanze) * tax;

    printf("La Tassa Equa stimata è di $%lf", aftertax);

}