// Fig. 11.10: fig11_10.c
// Creazione di un file ad accesso casuale in maniera sequenziale
#include <stdio.h>

// definizione della struttura clientData
struct clientData{
    unsigned int acctNum; // numero del conto
    char lastName[15]; // cognome del titolare del conto
    char firstName[10]; // nome del titolare del conto
    double balance; // saldo del conto
};

int main(void)
{
    FILE *cfPtr; // puntatore al file accounts.dat

    // fopen apre il file per la scrittura binaria
    if((cfPtr = fopen("accounts.dat", "wb"))== NULL){
        puts("File could not be opened.");
    }
    else{
        // crea clientData con informazioni predefinite
        struct clientData bankClient = {0, "", "", 0.0};

        // scrive 100 record vuoti su file
        for(unsigned int i = 1; i <= 100; ++i){
            fwrite(&bankClient, sizeof(struct clientData), 1, cfPtr);
        }

        fclose(cfPtr); // fclose chiude il file
    }
}