// Fig. 11.15: fig11_15.c
// Il programma per l'elaborazione della transazione legge sequenzialmente
// un file ad accesso casuale, aggiorna i dati già scritti sul file,
// crea nuovi dati da inserire nel file e cancella dati sul file.
#include <stdio.h>

// definizione della struttura clientData
struct clientData{
    unsigned int acctNum; // numero del conto
    char lastName[15]; // cognome del titolare del conto
    char firstName[10]; // nome del titolare del conto
    double balance; // saldo del conto
};

// prototipi
unsigned int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main(void)
{
    FILE *cfPtr; // puntatore al file accounts.dat

    // fopen apre il file per l'aggiornamento
    if((cfPtr = fopen("accounts.dat", "rb+"))== NULL){
        puts("File could not be opened.");
    }
    else{
        unsigned int choice; // scelta dell'utente

        // consenti all'utente di specificare l'azione
        while((choice = enterChoice()) != 5){
            switch (choice)
            { // crea un file di testo dal file di record
            case 1:
                textFile(cfPtr);
                break;
            // aggiorna un record
            case 2:
                updateRecord(cfPtr);
                break;
            // crea un record
            case 3:
                newRecord(cfPtr);
                break;
            // cancella un record esistente
            case 4:
                deleteRecord(cfPtr);
                break;
            // stampa un messaggio per una scelta non valida
            default:
                puts("Incorrect choice");
                break;
            }
        }
        
        fclose(cfPtr);
    }
}

// crea un file di testo formattato per la stampa
void textFile(FILE *readPtr)
{
    FILE *writePtr; // puntatore al file accounts.txt

    // fopen apre il file di testo per la scrittura
    if((writePtr = fopen("accounts.txt", "w")) == NULL){
        puts("File could not be opened.");
    }
    else{
        rewind(readPtr); // sposta il puntatore all'inizio del file
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

        // copia tutti i record sul file di testo
        while(!feof(readPtr)){
            // crea un oggetto clientData con informazioni predefinite
            struct clientData client = {0, "", "", 0.0};
            int result = fread(&client, sizeof(struct clientData), 1, readPtr);

            // scrivi un singolo record sul file di testo
            if(result != 0 && client.acctNum != 0){
                fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
            }
        }

        fclose(writePtr); // fclose chiude il file
    }
}

// aggiorna il saldo in un record
void updateRecord(FILE *fPtr)
{
    // ottieni il numero di conto da aggiornare
    printf("%s", "Enter account to update(1 - 100): ");
    unsigned int account; // numero del conto
    scanf("%d", &account);

    // sposta il puntatore del file al record corretto nel file
    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

    // crea un oggetto clientData senza informazioni
    struct clientData client = {0, "", "", 0.0};

    // leggi il record dal file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // stampa il messaggio di errore se il conto non esiste
    if(client.acctNum == 0){
        printf("Account #%d has no information.\n", account);
    }
    else{ // aggiorna il record
        printf("%-6d%-16s%-11s%10.2f\n\n", client.acctNum, client.lastName, client.firstName, client.balance);

        // richiedi l'ammontare della transazione all'utente
        printf("%s", "Enter charge (+) or payment (-): ");
        double transaction; // ammontare della transazione
        scanf("%lf", &transaction);
        client.balance += transaction; // aggiorna il saldo del record

        printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);

        // sposta il puntatore del file al record corretto nel file
        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

        // scrivi il record aggiornato al posto del vecchio record nel file
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// cancella un record esistente
void deleteRecord(FILE *fPtr)
{
    // ottieni il numero di conto da cancellare
    printf("%s", "Enter account to delete(1 - 100): ");
    unsigned int accountNum; // numero del conto
    scanf("%d", &accountNum);

    // sposta il puntatore del file al record corretto nel file
    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

    struct clientData client = {0, "", "", 0.0};

    // leggi il record dal file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // stampa il messaggio di errore se il conto non esiste
    if(client.acctNum == 0){
        printf("Account #%d doesn't exist.\n", accountNum);
    }
    else{ // cancella il record
        // sposta il puntatore del file al record corretto nel file
        fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

        struct clientData blankClient = {0, "", "", 0.0}; // cliente vuoto

        // sostituisci il record esistente con il record vuoto
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }
}

// crea e inserisci un record
void newRecord(FILE *fPtr)
{
    // ottieni il numero di conto da creare
    printf("%s", "Enter new account number(1 - 100): ");
    unsigned int accountNum; // numero del conto
    scanf("%d", &accountNum);

    // sposta il puntatore del file al record corretto nel file
    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

    // crea un oggetto clientData con informazioni predefinite
    struct clientData client = {0, "", "", 0.0};

    // leggi il record dal file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // stampa il messaggio di errore se il conto esiste già
    if(client.acctNum != 0){
        printf("Account #%d already contains information.\n", accountNum);
    }
    else{ // crea il record
        printf("%s", "Enter lastname, firstname, balance\n? ");
        scanf("%14s%9s%lf\n\n", &client.lastName, &client.firstName, &client.balance);

        client.acctNum = accountNum;

        // sposta il puntatore del file al record corretto nel file
        fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

        // inserisci il record nel file
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// consenti all'utente di inserire la scelta nel menu
unsigned int enterChoice(void)
{
    // stampa le opzioni disponibili
    printf("%s", "\nEnter your choice\n"\
                "1 - store a formatted text file of accounts called\n"
                "      \"accounts.txt\" for printing\n"
                "2 - update an account\n"
                "3 - add a new account\n"
                "4 - delete an account\n"
                "5 - end program\n? ");

    unsigned int menuChoice; // scelta dell'utente
    scanf("%u", &menuChoice); // ricevi la scelta dell'utente
    return menuChoice;
}