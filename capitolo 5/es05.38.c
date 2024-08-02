// Es. 5.38: es05_38.c
// Visualizzare la ricorsione
// È interessante osservare la ricorsione "in azione". Modificate la funzione fattoriale
// della Figura 5.18 per stampare la sua variabile locale, ovvero il parametro della
// chiamata ricorsiva. Per ogni chiamata ricorsiva stampate gli output su una riga separata
// e aggiungete un livello di indentazione. Fate del vostro meglio per rendere gli output
// chiari, interessanti e significativi. L'obiettivo qui è quello di progettare e
// implementare un formato di output che aiuti una persona a capire meglio la ricorsione.
// Se volete, potete aggiungere tali capacità di stampa ai molti altri esempi ed esercizi
// di ricorsione presenti in tutto il testo.
#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
    // durante ogni iterazione, calcola
    // factorial(i) e stampa il risultato
    for(unsigned int i = 0; i <=21; ++i){
        printf("%u! = %llu\n", i, factorial(i));
    }
}

// definizione ricorsiva della funzione fattoriale
unsigned long long int factorial(unsigned int number)
{
    // caso di base
    if(number <= 1){
        return 1;
    }
    else{ // passo ricorsivo
            printf("RICORSIONE\n");
        return (number * factorial(number - 1));

    }
}