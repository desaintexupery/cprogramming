// Es. 4.19: es04_19.c
// Calcolo delle vendite
// Un rivenditore on-line vende cinque differenti prodotti i cui
// prezzi al dettaglio sono mostrati nella seguente tabella:
// Numero del prodotto  Prezzo al dettaglio
// 1                    $ 2,98
// 2                    $ 4,50
// 3                    $ 9,98
// 4                    $ 4,49
// 5                    $ 6,87
// Scrivete un programma che legga una serie di coppie di numeri
// come segue:
// a) Numero del prodotto
// b) Quantità venduta in un giorno
// Il vostro programma deve usare un'espressione switch per permettervi
// di determinare il prezzo al dettaglio per ogni prodotto. Inoltre deve
// calcolare e stampare il valore al dettaglio totale di tutti i prodotti
// venduti nell'ultima settimana.
#include <stdio.h>

int main(void)
{
    double prezzo1 = 2.98;
    double prezzo2 = 4.50;
    double prezzo3 = 9.98;
    double prezzo4 = 4.49;
    double prezzo5 = 6.87;
    double totale = 0;
    int num1, num2, num3, num4, num5;
    int num = 0;
    double totale1 = num1 * prezzo1;
    double totale2 = num2 * prezzo2;
    double totale3 = num3 * prezzo3;
    double totale4 = num4 * prezzo4;
    double totale5 = num5 * prezzo5;

    puts("Inserire il numero del prodotto: ");

    while((num = getchar()) != EOF){
        switch (num)
        {
        case '1':
            printf("Il prezzo del prodotto 1 è di $%f\n", prezzo1);
            ++num1;
            break;
        case '2':
            printf("Il prezzo del prodotto 2 è di $%f\n", prezzo2);
            ++num2;
            break;        
        case '3':
            printf("Il prezzo del prodotto 3 è di $%f\n", prezzo3);
            ++num3;
            break;
        case '4':
            printf("Il prezzo del prodotto 4 è di $%f\n", prezzo4);
            ++num1;
            break;    
        case '5':
            printf("Il prezzo del prodotto 5 è di $%f\n", prezzo5);
            ++num5;
            break;     
        case '\n':
        case '\t':
        case ' ':
            break;    
        default:
            printf("%s", "Inserire un numero di prodotto valido\n");
            break;
        }
    }
    totale = totale1 + totale2 + totale3 + totale4 + totale5;
    printf("Nell'ultima settimana si è venduto un totale di $%f.", totale);
    
}