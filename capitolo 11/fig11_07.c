// Fig. 11.7 fig11_07.c
// Programma di interrogazione per il credito
#include <stdio.h>

int main(void)
{
    FILE *cfPtr; // cfPtr = puntatore al file clients.txt

    // fopen apre il file per la lettura
    if((cfPtr = fopen("clients.txt", "r")) == NULL){
        puts("File could not be opened");
    }
    else{

        // stampa le opzioni di richiesta
        printf("%s", "Enter request\n"
                "1 - List accounts with zero balances\n"
                "2 - List accounts with credit balances\n"
                "3 - List accounts with debit balances\n"
                "4 - End of run\n? ");
        unsigned int request; // numero di richiesta
        scanf("%u", &request);

        // elabora la richiesta dell'utente
        while(request != 4){
            unsigned int account; // numero del conto
            double balance; // saldo del conto
            char name[30]; // nome del titolare del conto

            // leggi il numero del conto, il nome e il saldo dal file
            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

            switch(request){
                case 1:
                    puts("\nAccounts with zero balances: ");

                    // leggi i contenuti del file (fino a eof)
                    while(!feof(cfPtr)){
                        // scrive solo se balance è 0
                        if(balance == 0){
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }

                        // leggi il numero del conto, il nome e il saldo dal file
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }

                    break;
                case 2:
                    puts("\nAccounts with credit balances: ");

                    // leggi i contenuti del file (fino a eof)
                    while(!feof(cfPtr)){
                        // scrive solo se balance è minore di 0
                        if(balance < 0){
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }

                        // leggi il numero del conto, il nome e il saldo dal file
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }

                    break;      
                case 3:
                    puts("\nAccounts with debit balances: ");

                    // leggi i contenuti del file (fino a eof)
                    while(!feof(cfPtr)){
                        // scrive solo se balance è maggiore di 0
                        if(balance > 0){
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }

                        // leggi il numero del conto, il nome e il saldo dal file
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }

                    break;             
            }

            rewind(cfPtr); // riporta cfPtr all'inizio del file

            printf("%s", "\n? ");
            scanf("%d", &request);
        }

        puts("End of run.");
        fclose(cfPtr); // fclose chiude il file
    }
}