// Es. 4.40: es04_40.c
// Crescita della popolazione mondiale
// La popolazione mondiale è considerevolmente aumentata nel corso dei secoli.
// La crescita continua potrebbe alla fine sfidare i limiti di aria respirabile,
// di acqua potabile. di coluture arabili e di altre risorse limitate. È evidente
// che negli ultimi anni la crescita è rallentata e che la popolazione mondiale
// potrebbe qualche volta raggiungere il picco massimo in questo secolo per poi
// iniziare a calare. Per questo esercizio ricercate on-line articoli sull'aumento
// della popolazione mondiale. Assicuratevi di prendere in esame vari punti di vista.
// Ottenete stime per l'annuale popolazione mondiale e il suo tasso di crescita
// (la percentuale con cui è probabile che aumenti quest'anno). Scrivete un programma
// che calcoli la crescita della popolazione mondiale ogni anno per i prossimi 75 anni,
// usando l'assunto che il tasso della crescita annuale resterà costante.
// Stampate i risultati in una tabella. La prima colonna dovrebbe visualizzare l'anno
// (dall'anno 1 all'anno 75), la seconda la popolazione mondiale prevista per la fine di
// quell'anno, e la terza l'aumento numerico nella popolazione mondiale che si verificherebbe
// quell'anno. Usando i vostri risultati, determinare l'anno in cui la popolazione sarebbe il
// doppio di oggi, qualora continuasse il tasso di crescita di quest'anno.
#include <stdio.h>

int main(void)
{
    double tasso = 0.011;
    double popolazione = 7951000000;
    double popprima = 0;
    
    printf("ANNO\tPOPOLAZIONE\tAUMENTO\n\n");

    for(int anno = 1; anno <= 75; anno++){
        popprima = popolazione;
        if(anno > 1){
            popolazione += popolazione * tasso;
        }
        printf("%d\t%lf\t%lf\n", anno, popolazione, popolazione - popprima);
    }

}