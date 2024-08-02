// Es. 5.9: es05_09.c
// Costo del parcheggio
// Un garage fa pagare una tariffa minima di $2.00 per parcheggiare
// fino a tre ore, più $0,50 all'ora per ogni ora o parte di essa
// oltre le tre ore. Il costo massimo per un dato periodo di 24 ore
// è di $10,00. Supponete che nessuna macchina resti parcheggiata per
// più di 24 ore. Scrivete un programma che calcoli e stampi i costi
// del parcheggio per ciascuno dei tre clienti che ieri hanno
// parcheggiato le loro auto in questo garage. Dovete inserire le ore
// di parcheggio per ogni cliente. Il vostro programma deve stampare
// i risultati in un formato tabellare e deve calcolare e stampare il
// totale degli incassi di ieri. Il programma deve usare la funzione
// calculateCharges per determinare il costo per ogni cliente. Il
// vostro output deve avere il seguente formato:
// Car      Hours   Charge
// 1          1.5     2.00
// 2          4.0     2.50
// 3         24.0    10.00
// TOTAL     29.5    14.50
#include <stdio.h>
#include <math.h>

double calculateCharges(double hours);

int main(void){

    double car_1_hours = 1.5;
    double car_2_hours = 4.0; 
    double car_3_hours = 24.0;
    double tothours;
    double car_1_charge, car_2_charge, car_3_charge, totcharge;
        tothours = car_1_hours + car_2_hours + car_3_hours;

    printf("Car\t\tHours\t\tCharge\n");

    car_1_charge = calculateCharges(car_1_hours);
    car_2_charge = calculateCharges(car_2_hours);
    car_3_charge = calculateCharges(car_3_hours);
        totcharge = car_1_charge + car_2_charge + car_3_charge;

        printf("1\t\t%f\t%f\n", car_1_hours, car_1_charge);
        printf("2\t\t%f\t%f\n", car_2_hours, car_2_charge);
        printf("3\t\t%f\t%f\n", car_3_hours, car_3_charge);   
        printf("TOTAL\t\t%f\t%f", tothours, totcharge); 
}

double calculateCharges(double hours)
{
    if ((hours - 3.0) <= 0){
        return 2;
        }
    else if (hours == 24.0){
	return 10;
        }
    else {
	return (ceil(hours) - 3) * 0.5 + 2;
    }
}