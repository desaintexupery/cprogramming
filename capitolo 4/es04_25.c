// Es 4.25: es04_25.c
// Tabella di equivalenze fra decimali, binari, ottali ed esagesimali
// Scrivete un programma che stampi una tabella dei valori equivalenti binari,
// ottali ed esagesimali dei numeri decimali nell'intervallo da 1 a 256.
// Se non avete familiarità con questi sistemi di numerazione, leggete
// l'Appendice C prima di cimentarvi con questo esercizio. [Nota: potete
// stampare un intero come un valore ottale o esagesimale rispettivamente con
// gli specificatori di conversione %o e %X.]
#include <stdio.h>

int main(void)
{
    int binario = 0;
    int currentnum = 0;
    int pos0, pos1, pos2, pos3, pos4;

    printf("Decimale\tBinario\tOttale\tEsagesimale\n");

    for(int x = 1; x <= 256; ++x){
        currentnum = x % 2;
        if(currentnum == 0){
            pos4 = 0;}
        if(currentnum != 0){
            pos4 = 1;}
        currentnum = x / 2 % 2;
        if(currentnum == 0){
            pos3 = 0;}
        if(currentnum != 0){
            pos3 = 1;}
        currentnum = x / 2 / 2 % 2;
        if(currentnum == 0){
            pos2 = 0;}
        if(currentnum != 0){
            pos2 = 1;}
        currentnum = x / 2 / 2 / 2 % 2;
        if(currentnum == 0){
            pos1 = 0;}
        if(currentnum != 0){
            pos1 = 1;}
        currentnum = x / 2 / 2 / 2 / 2 % 2;
        if(currentnum == 0){
            pos0 = 0;}
        if(currentnum != 0){
            pos0 = 1;}

        printf("%u\t%u%u%u%u%u\t%o\t%X\n", x, pos0, pos1, pos2, pos3, pos4, x, x);
        }
}