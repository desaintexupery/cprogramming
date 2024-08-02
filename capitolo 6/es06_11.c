// Es. 6.11: es06_11.c
// Bubble sort
// Il bubble sort presentato nella Figura 6.15 è insufficiente per array grandi.
// Apportate le seguenti semplici modifiche per migliorare le sue prestazioni.
// a) Dopo la prima passsata, è garantito che il numero più grande si trova 
//    nell'elemento dell'array con indice più alto; dopo la seconda passata, i due
//    numeri più grandi sono "al loro posto" e così via. Invece di fare nove
//    confronti a ogni passata, modificate il bubble sort per fare otto confronti alla
//    seconda passata, sette alla seconda passata, sette alla terza passata e così via.
// b) I dati nell'array possono già essere nell'ordine giusto o quasi giusto, allora
//    perché fare nove passate se ne basterebbero di meno? Modificate l'algoritmo per
//    controllare alla fine di ogni passata se sono fatti degli scambi. Se non sono
//    stati fatti, allora i dati devono essere già nell'ordine giusto, così il programma
//    dovrebbe terminare. Se sono stati fatti degli scambi, allora è necessaria almeno
//    un'altra passata.
#include <stdio.h>
#define SIZE 10

void bubbleSort(int a[]);

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // inizializza a 
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");

    // stampa l'array originario
    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d", a[i]);
    }

    bubbleSort(a);

    puts("\nData items in ascending order");

    // stampa l'array ordinato
    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d", a[i]);
    }

    puts("");
}

void bubbleSort(int a[])
{
    int pass, hold;
    int switchMade = 0;

        for(unsigned int pass = 1; pass < SIZE; ++pass){
        for(size_t i = 0; i <= SIZE - 1 - pass; ++i){

            if(a[i] > a[i + 1]){
                int hold  = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                switchMade = 1;
                puts("\nswitch made!");
            }
        }
            if(switchMade == 0)
	        break;
    }
}