// Es. 5.26: es05_26.c
// Numeri perfetti
// Un numero intero è un numero perfetto se i suoi fattori, compreso 1
// (ma non il numero stesso), hanno come somma il numero stesso. Ad
// esempio, 6 è un numero perfetto perché 6 = 1 + 2 + 3. Scrivete una
// funzione perfect che determini se il parametro number è un numero
// perfetto. Usate questa funzione in un programma che determini e stampi
// tutti i numeri perfetti da 1 e 1000. Stampate i fattori di ogni numero
// perfetto per confermare che il numero è effettivamente perfetto.
// Sfidate la potenza del vostro computer provando numeri molto più grandi
// di 1000.
#include <stdio.h>

int perfect(x);

int main(void)
{
    int a;
    for(int i = 1; i <= 1000; i++){

	    a = perfect(i);
	    if (a == i){
	        printf("%d\n", i);
	    }
    }

}

int perfect(x)
{
    int j, sum = 0;

    for (j = 1; j < x; j++) {
	if (x % j == 0)
	    sum += j;
    }

    return sum;
}