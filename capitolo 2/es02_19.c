// Es. 2.19: es02_19.c
// (Aritmetica, valore maggiore e valore minore)
// Scrivete un programma che riceva in ingresso
// tre diversi interi dalla tastiera, poi stampi la somma,
// la media, il prodotto, il minore e il maggiore
// di questi numeri. Usate solamente la forma a selezione
// singola dell'istruzione if che avete imparato in
// questo capitolo. Il dialogo sullo schermo deve apparire
// come segue:
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27
#include <stdio.h>
int main( void )
{
    int num1;
    int num2;
    int num3;
    int small;
    int big;

    printf( "Enter three different integers: " );
    
    scanf( "%d %d %d", &num1, &num2, &num3 );

    int sum = num1 + num2 + num3;
    int average = sum / 3;
    int product = num1 * num2 * num3;

    printf( "Sum is %d\n", sum );
    printf( "Average is %d\n", average );
    printf( "Product is %d\n", product );

    if( num1 < num2 ){
        if( num1 < num3 ){
            small = num1;
        }
    }
    if( num2 < num1 ){
        if( num2 < num3 ){
            small = num2;
        }
    }
    if( num3 < num1 ){
        if( num3 < num2 ){
            small = num3;
        }
    }
    
    printf( "Smallest is %d\n", small );

    if( num1 > num2 ){
        if( num1 > num3 ){
            big = num1;
        }
    }
    if( num2 > num1 ){
        if( num2 > num3 ){
            big = num2;
        }
    }
    if( num3 > num1 ){
        if( num3 > num2 ){
            big = num3;
        }
    }

     printf( "Largest is %d\n", num3 );

}