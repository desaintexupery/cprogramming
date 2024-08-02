// Es. 5.28: es05_28.c
// Inversione di cifre
// Scrivete una funzione che riceva un valore intero e restituisca il
// numero con le sue cifre invertite. Ad esempio, dato un numero 7631,
// la funzione deve restituire 1367.
#include <stdio.h>

int reverse(n);

int main(void)
{

    int num;

    printf("Input your number: ");
    scanf("%d", &num);


    printf("The reversed number is: %d", reverse(num));

    return 0;
}

int reverse(n)
{
    int reversed = 0;
    
    while(n > 1){
        reversed += n % 10;
        n /= 10;
        if(n >= 1)
            reversed *= 10;
    }
    
    if(n==1)
        reversed += 1;

    return reversed;
}