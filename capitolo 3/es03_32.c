// Es. 3.32: es03_32.c
// Quadrato di asterischi
// Scrivete un programma che legga il lato di un quadrato e poi stampi
// quel quadrato con asterischi. Il programma deve operare con quadrati
// delle dimensioni dei lati tra 1 e 20. Ad esempio, se il programma
// legge una dimensione pari a 4, deve stampare
// ****
// ****
// ****
// ****
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
        while(riga <= lato){
            colonna = 1;

        while(colonna <= lato){
            printf("*");
            colonna++;
        }

        printf("\n");
        riga++;
        }

    }
}