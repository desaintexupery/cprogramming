// Es. 5.30: es05_30.c
// Valutazione qualitativa dei voti di uno studente
// Scrivete una funzione qualityPoints che riceva in ingresso la media dei voti
// di uno studente e restituisca 4 se questa è compresa nell'intervallo 90-100,
// 3 se è tra 80-89, 2 se è tra 70-79, 1 se è tra 60-69 e 0 se la media è più
// bassa di 60.
#include <stdio.h>

int qualityPoints(p);

int main(void)
{
    int media;
    printf("Inserisci media(0-100): ");\
    scanf("%d", &media);
    return qualityPoints(media);

}

int qualityPoints(p)
{
    if(p < 60){
        return 0;
    }
    else if(p >= 60 || p <= 69){
        return 1;
    }
    else if(p >= 70 || p <= 79){
        return 2;
    }
    else if(p >= 80 || p <= 89){
        return 3;
    }
    else if(p >= 90){
        return 4;
    }
}