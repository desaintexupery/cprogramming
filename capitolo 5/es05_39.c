// Es. 5.39: es05_39.c
// Massimo comun divisore ricorsivo
// Il massimo comun divisore degli interi x e y è l'intero più grande che divide in parti
// uguali sia x che y. Scrivete una funzione ricorsiva gcd che restituisca il massimo comun
// divisore di x e y. Il gcd di x e y è definito ricorsivamente come segue: se y è uguale a
// 0, allora gcd(x, y) è x; altrimenti gcd(x, y) è gcd(y, x % y), dove % è l'operatore
// di resto.
#include <stdio.h>

int gcd(x, y);

int main(void)
{
    int num1, num2;
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2);

    printf("GCD: %d", gcd(num1, num2));
}

int gcd(x, y)
{
    if(x % y == 0){
        return y;
    }
    else
        return gcd(y, x % y);
}