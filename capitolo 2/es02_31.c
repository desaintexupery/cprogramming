// Es. 2.31: es02_31.c
// Tavola di quadrati e cubi
// Usando solo le tecniche che avete appreso in questo
// capitolo, scrivete un programma che calcoli i quadrati
// e i cubi dei numeri da 0 a 10 e usi tabulazioni per
// stampare la seguente tavola di valori:
// numero   quadrato    cubo
// 0        0           0
// 1        1           1
// 2        4           8
// 3        9           27
// 4        16          64
// 5        25          125
// 6        36          216
// 7        49          343
// 8        64          512
// 9        81          729
// 10       100         1000
#include <stdio.h>

int main( void )
{
    int num;

    printf( "numero\tquadrato\tcubo\n" );
    num = 1;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 2;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 3;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 4;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 5;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 6;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 7;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 8;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 9;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
    num = 10;
    printf( "%d\t%d\t\t%d\n", num, num * num, num * num * num );
}