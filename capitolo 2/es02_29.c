// Es. 2.29: es02_29.c
// Valore intero di un carattere
// Uno sguardo in avanti. In questo capitolo avete
// appreso qualcosa sugli interi e sul tipo int.
// Il C può anche rappresentare lettere maiuscole,
// minuscole e una considerevole varietà di simboli
// speciali. Il C usa internamente numeri interi per
// rappresentare i singoli caratteri. L'insieme dei 
// caratteri che un computer usa assieme alle
// corrispondenti rappresentazioni intere per quei
// caratteri si dice insieme dei caratteri di quel
// computer. Potete stampare l'intero equivalente 
// della lettera maiuscola A, ad esempio, eseguendo
// l'istruzione
// printf( "%d", 'A' );
// Scrivete un programma in C che stampi gli
// equivalenti interi di alcune lettere maiuscole,
// minuscole, di alcune cifre e simboli speciali.
// Determinate almeno gli equivalenti interi dei 
// seguenti caratteri: A B C a b c 0 1 2 $ * + /
// e il carattere di spazio.
#include <stdio.h>

int main( void )
{
    printf( "%d\n", 'A' );
    printf( "%d\n", 'B' );
    printf( "%d\n", 'C' );
    printf( "%d\n", 'a' );
    printf( "%d\n", 'b' );
    printf( "%d\n", 'c' );
    printf( "%d\n", '0' );
    printf( "%d\n", '1' );
    printf( "%d\n", '2' );
    printf( "%d\n", '$' );
    printf( "%d\n", '*' );
    printf( "%d\n", '+' );
    printf( "%d\n", '/' );
    printf( "%d", ' ' );
}