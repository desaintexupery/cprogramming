// Es. 3.16: es_03_13.c
// Consumo di carburante
// I guidatori sono interessati al consumo effettuato dalle
// loro automobili. Un guidatore ha tenuto traccia dei vari
// pieni di carburante, registrando le miglia percorse e i
// galloni consumati a ogni pieno. Realizzate un programma 
// che richieda di inserire le miglia percorse e i galloni
// consumati a ogni pieno. Il programma deve calcolare e 
// stampare le miglia per gallone percorse per ogni pieno.
// Dopo aver processato tutte le informazioni di input, il
// programma deve calcolare e stampare le miglia complessive
// per gallone percorse per tutti i pieni. Ecco un dialogo
// di input/output di esempio:
// Enter the gallons used (-1 to end): 12.8
// Enter the miles driven: 287
// The miles/gallons for this tank was 22.421875
//
// Enter the gallons used (-1 to end): 10.3
// Enter the miles driven: 200
// The miles/gallons for this tank was 19.4174475
//
// Enter the gallons used (-1 to end): 5
// Enter the miles driven: 120
// The miles/gallons for this tank was 24.000000
//
// Enter the gallons used (-1 to end): -1
//
// The overall average miles/gallon was 21.601423
#include <stdio.h>

int main( void )
{
    int counter;
    float gallons, miles;
    float milesPerGallon;
    float totalmiles;
    float totalgallons;
    float total;
    float average;
    
    total = 0;
    counter = 1;
    average = 0;


        printf( "%s", "Enter the gallons used (-1 to end): " );
        scanf( "%f", &gallons );        


    while ( gallons != -1 ) {

        printf( "%s", "Enter the miles driven: " );
        scanf( "%f", &miles );
        totalmiles += miles;
        totalgallons += gallons;

        if (gallons != 0) {
            average = (float) miles / gallons;
        }
        else {
            average = 0;}

        printf( "The miles/gallon for this tank was %f\n\n", average );
        printf( "%s", "Enter the gallons used (-1 to end): " );
        scanf( "%f", &gallons );
    }

    if (totalgallons != 0) {
        average = (float) totalmiles / totalgallons;
    }
    else {
        average = 0;
    }

    printf( "The overall average miles/gallon was %f", totalmiles / totalgallons );
   
}