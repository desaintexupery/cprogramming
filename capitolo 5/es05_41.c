// Es. 5.41: es05_41.c
// Distanza tra punti
// Scrivete una funzione distance che calcoli la distanza tra due punti
// (x1, y1) e (x2, y2). Tutti i numeri e i valori devono essere di tipo
// double.
#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2);

int main(void)
{
    double x1, x2, y1, y2;

    printf("Enter the x coordinate of the first point: ");
    scanf("%lf", &x1);
    printf("Enter the y coordinate of the first point: ");
    scanf("%lf", &y1);
    printf("Enter the x coordinate of the second point: ");
    scanf("%lf", &x2);
    printf("Enter the y coordinate of the second point: ");
    scanf("%lf", &y2);

    printf("Distance is: %f", distance(x1, x2, y1, y2));
}

double distance(double x1, double x2, double y1, double y2)
{
    double distance;
    distance = sqrt(pow((x2 - x1), 2)+pow((y2 - y1), 2));
    return distance;
}