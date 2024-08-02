// Fig. 09_19: fig09_19.c
// Lettura di numeri in virgola mobile
#include <stdio.h>

int main(void)
{
    double a;
    double b;
    double c;

    puts("Enter three floating-point numbers: ");
    scanf("%le%lf%lg", &a, &b, &c);

    printf("Here are the numbers entered in plain:");
    puts("floating-point notation:\n");
    printf("%f\n%f\n%f\n", a, b, c);
}