// Fig. 11.2: fig11_02.c
// Creazione di un file sequenziale
#include <stdio.h>

int main(void)
{
    FILE *cfPtr; // puntatore al file clients.txt

    // fopen apre il file per la scrittura
    if((cfPtr = fopen("clients.txt", "w")) == NULL){
        puts("File could not be opened");
    }
    else{
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        unsigned int account; // numero del conto
        char name[30]; // nome del titolare del conto
        double balance;  // saldo del conto

        scanf("%d%29s%lf", &account, name, &balance);

        // scrivi numero del conto, nome e saldo nel file con fprintf
        while(!feof(stdin)){
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // fclose chiude il file
    }
}