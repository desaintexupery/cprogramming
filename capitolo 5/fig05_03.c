// Fig. 5.3: fig05_03.c
// Creazione e uso di una funzione definita dal programmatore
#include <stdio.h>

int square(int y); // prototipo di funzione

int main(void)
{
    // ripeti 10 volte e ogni volta calcola e stampa il quadrato di x
    for(int x = 1; x <= 10; ++x){
        printf("%d ", square(x)); // chiamata della funzione
    }

    puts("");
}

// definizione della funzione square
int square(int y) // y è una copia dell'argomento della funzione
{
    return y * y; // restituisce il quadrato di y come un valore int
}