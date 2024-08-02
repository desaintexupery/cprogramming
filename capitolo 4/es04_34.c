// Es. 4.34: es04_34.c
// Numerali romani equivalenti di valori decimali
// Scrivete un programma che stampi una tabella dei numerali romani equivalenti dei numeri
// decimali nell'intervallo da 1 a 100.
#include <stdio.h>

int main(void)
{   
    int current;
    
    for(int i = 1; i <= 100; i++)
    {
        current = i;
        
        if(current == 100) {
            printf("C");
            current = 0;
        }
        if(current >= 50) {
            printf("L");
            current -= 50;
        }
        while(current >= 10) {
            printf("X");
            current -= 10;
        }
        if(current >= 5) {
            if(current % 10 == 9) {
                printf("IX");
                current -= 9;
            }
            else {
                printf("V");
                current -= 5;
            }   
        }
        while(current > 0) 
        {
            if(current % 10 == 4) {
                printf("IV");
                current -= 4;
            }
            else {
                printf("I");
                current -= 1;
            }
            
        }
        printf("\n");
    }
}
