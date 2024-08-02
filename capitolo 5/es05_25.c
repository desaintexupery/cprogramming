// Es. 5.25: es05_25.c
// Trovare il minimo
// Scrivete una funzione che restituisca il più piccolo di tre numeri
// in virgola mobile.
#include <stdio.h>

double minimum(double x, double y, double z);

int main(void)
{
    double num1, num2, num3;

    printf("%s", "Enter three numbers: ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    printf("Minimum is %f\n", minimum(num1, num2, num3));
}

double minimum(double x, double y, double z)
{
    double min = x;

    if(y < min){
        min = y;
    }

    if(z < min){
        min = z;
    }

    return min;
}