// Es. 5.17: es05_17.c
// Multipli
// Scrivete una funzione multiple che determini per una coppia di interi
// se il secondo sia un multiplo del primo. La funzione deve ricevere due
// argomenti interi e restituire 1 (vero) se il secondo è un multiplo del
// primo, e 0 (falso) nel caso contrario. Usate questa funzione in un
// programma che riceve in ingressi una serie di coppie di interi.
#include <stdio.h>

int multiple(n1, n2);

int main(void)
{
    int num1, num2;

    printf("%s", "Enter num 1: ");
    scanf("%d", &num1);
    printf("%s", "Enter num 2: ");
    scanf("%d", &num2);

    multiple(num1, num2);
}

int multiple(n1, n2)
{
    if(n1 % n2 == 0){
        return 1;
    }
    else return 0;
}