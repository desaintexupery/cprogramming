// Es. 3.33: es03_33.c
// Quadrato di asterischi vuoto
// Modificate il programma che avete scritto per l'Esercizio 3.32
// in modo che stampi un quadrato vuoto. Ad esempio, se il programma
// legge una dimensione pari a 5, deve stampare
// *****
// *   *
// *   *
// *   *
// *****
#include <stdio.h>

int main(void)
{
    int lato, colonna, riga = 1;
    int lato_min = 1;
    int lato_max = 20;

    printf("%s", "Inserire lato (valori da 1 a 20): ");
    scanf("%d", &lato);

    
    while(lato < lato_min){
        printf("Lato deve essere incluso tra 1 e 20\n");
    }
    while(lato > lato_max){
        printf("Lato deve essere incluso tra 1 e 20\n");
    }

    while(lato <= lato_max){
        if (riga == 1 || riga == lato) {
		colonna = 1;
		while (colonna <= lato) {
		    printf("*");
		    colonna++;
		}
		printf("\n");
		}

		else {
			colonna = 1;
		while (colonna <= lato) {
		    if (colonna == 1 || colonna == lato){
			printf("*");}
		    else{
			printf(" ");}
		
		colonna++;
	}
	printf("\n");
	}
	riga++;
	if (riga > lato){
		lato = 21;
	}

	}
    
}