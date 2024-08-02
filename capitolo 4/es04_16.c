// Es. 4.16: es04_16.c
// Programma che stampa triangoli
// Scrivete un programma che stampi separatamente le seguenti figure
// una sotto l'altra. Usate dei cicli for per generare le figure.
// Tutti gli asterischi (*) devono essere stampati da una singola 
// istruzione printf della forma printf("%s", "*"); (ciò fa sì che
// gli asterischi vengano stampati uno accanto all'altro). [Suggerimento:
// le ultime due figure richiedono che igni riga cominci con un numero
// appropriato di spazi.]
#include <stdio.h>

int main(void)
{
    printf("(A)\n\n");
    for(int x = 1; x <= 10; x++){
        for(int y = 1; y <= x; y++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n(B)\n\n");
    for(int x = 10; x>= 1; x--){
        for(int y = 1; y <= x; y++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n(C)\n\n");
    for(int x = 10; x>= 1; x--){
        for(int y = 0; y < 10 - x; y++){
            printf( " " );  
        }
        for(int y = 1; y <= x; y++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("(D)\n\n");
    for(int x = 1; x <= 10; x++){
        for(int y = 0; y < 10 - x; y++){
            printf(" ");
        }
        for(int y = 1; y <= x; y++){
            printf("%s", "*");
        }
        printf("\n");
    }
}