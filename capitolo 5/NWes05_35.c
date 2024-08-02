// Es. 5.35: es05_35.c
// Fibonacci
// La serie di Fibonacci
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
// inizia con i termini 0 e 1 e ha la proprietà che ogni termine che segue è la somma
// dei due termini precedenti. a) Scrivete una funzione fibonacci(n) non ricorsiva che
// calcoli l'n^(mo) numero di Fibonacci. Usate unsigned int per il tipo del parametro
// della funzione e unsigned long long int per il suo tipo di ritorno. b) Determinate
// il numero di Fibonacci più grande che può essere stampato sul vostro sistema.
#include <stdio.h>

unsigned int fibonacci(unsigned long long int n);

int main(void)
{
   int num;

   printf("Enter the value of n: ");
   scanf("%llu", &num);

   printf("%u", fibonacci(num));

   
}

unsigned int fibonacci(unsigned long long int n)
{
    int n1 = 0, n2 = 1, x = 0, fib = 0;

    if((int)n < 1){
        printf("Invalid Number of terms\n");
        return 0;
    }

   for(int i = 1; i <= (int)n - 1; i++) {
        if (i > 2) {
            int x = n1 + n2;
            n2 = n1;
            n1 = x;
            printf("%d ", x);
        }
    return (unsigned int)x;
   }

}