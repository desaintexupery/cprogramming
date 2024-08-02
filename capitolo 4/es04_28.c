// Es. 4.28: es04_28.c
// Calcolo della paga settimanale
// Un'azienda paga i suoi impiegati come manager (che ricevono una retribuzione fisso
// settimanale), come lavoratori a ore (che ricevono una paga fissa all'ora per le prime
// 40 ore e "una volta e mezza" - cioè 1,5 volte la loro paga all'ora - per lo straordinario),
// lavoratori con provvigione (che ricevono $250 più il 5,7% delle loro vendite settimanali
// lorde) o lavoratori a cottimo (che ricevono una quantità fissa di denaro per ogni articolo
// che producono; ogni lavoratore a cottimo di questa azienda lavora esclusivamente su un solo
// tipo di articolo). Scrivete un programma per calcolare la paga settimanale di ogni impiegato.
// Non conoscete in anticipo il numero degli impiegati. Ogni tipo di impiegato ha il proprio
// codice paga: i manager hanno il codice paga 1, i lavoratori a ore il 2, i lavoratori a
// provvigione il 3 e i lavoratori a cottimo il 4. Usate uno switch per calcolare la paga di 
// ogni impiegato in base al codice paga di quell'impiegato. All'interno dello switch,
// richiedete all'utente (ossia all'impiegato che si occupa dei libri paga) di inserire i dati
// appropriati necessari al vostro programma per calcolare la paga di ogni impiegato in base al
// suo codice paga. [Nota: potete inserire valori di tipo double usando lo specificatore di
// conversionr %lf con scanf.]
#include <stdio.h>

int main(void)
{
    int codicePaga;
    double ore, oreExtra, paga, vendite, prodotti;
    puts("1 - manager\n2 - lavoratori a ore\n3 - lavoratori a provvigione\n4 - lavoratori a cottimo\nInserire il codice paga(EOF per uscire): ");
    
    while((codicePaga = getchar()) != EOF){
        switch(codicePaga){

            case '1': puts("La tua paga settimanale è di $500\n");
                    break;
            case '2': puts("Inserire le ore lavorate: ");
                        scanf("%lf", &ore);
                        if(ore > 40){ 
                            oreExtra = ore - 40;
                            paga = 40 * 20;
                            paga += oreExtra * 30;
                        } 
                        else { 
                            paga = ore * 20;
                        } 
                    printf("La tua paga settimanale è di $%lf\n", paga);
                    break;
            case '3': puts("Inserire il totale delle vendite settimanali lorde: ");
                    scanf("%lf", &vendite);
                    vendite *= 0.057;
                    paga = 250 + vendite;
                    break;
            case '4': puts("Inserire il numero di articoli prodotti: ");
                    scanf("%lf", &prodotti);
                    paga = 5 * prodotti;
                    printf("La tua paga settimanale è di $%lf\n", paga);
                    break;
                case '\n':
                case '\t':
                case ' ':
                    break;
              default: puts("Codice paga non valido. Inserire nuovo codice\n");
                    break;
        }
    }
}