// Es. 6.15: es06_15.c
// Eliminazione di duplicati
// Usate un array unidimensionale per risolvere il seguente problema. Memorizzate 20 numeri,
// ognuno dei quali compreso tra 10 e 100, estremi inclusi. Quando un numero viene letto,
// stampatelo solo se non è un duplicato di un numero già letto. Tenete conto del "caso
// peggiore", in cui tutti i 20 numeri sono differenti. Usate l'array più piccolo possibile
// per risolvere questo problema.
#include <stdio.h>
#define SIZE 20

int it_exists(int number, int array[], int search_limit);

int main(void)
{
    int numbers[SIZE] = {0};
    int number, new = 0;

    for(int i = 1; i <= 20; i++){
	printf("Enter a number beetween 10 and 100: ");
	scanf("%d", &number);

	while(number < 10 || number > 100){
	    printf("The number must be beetween 10 and 100\n");
	    printf("Enter a number beetween 10 and 100: ");
	    scanf("%d", &number);
	}

    puts(""); 

	if (it_exists(number, numbers, new));
    else{   numbers[new] = number;
	        ++new;
    }
	}
    
    for(size_t j = 0; j < 5; ++j){
        printf("%d\n", numbers[j]);
    }
    for(size_t j = 5; j < 10; ++j){
        printf("%d\n", numbers[j]);
    }
    for(size_t j = 10; j < 15; ++j){
        printf("%d\n", numbers[j]);
    }
    for(size_t j = 15; j < SIZE; ++j){
        printf("%d\n", numbers[j]);
    }
}


int it_exists(int the_number, int the_array[], int search_limit)
{

    int j;

    for (j = 0; j < search_limit; j++)
	if(the_number == the_array[j]){
	    return 1;
    }

    return 0;

}