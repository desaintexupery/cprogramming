// Fig. 12.13: fig12_13.c
// Gestione di una coda
#include <stdio.h>
#include <stdlib.h>

struct queueNode{
    char data; 
    struct queueNode *nextPtr; 
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions(void);

int main(void)
{
    QueueNodePtr headPtr = NULL;
    QueueNodePtr tailPtr = NULL;
    char item;

    instructions();
    printf("%s", "? ");
    unsigned int choice;
    scanf("%u", &choice);

    while(choice != 3){
        switch(choice){
            // metti in coda un valore
            case 1:
                printf("%s", "Enter a character: ");
                scanf("\n%c", &item);
                enqueue(&headPtr, &tailPtr, item);
                printQueue(headPtr);
                break;
            // estrai dalla coda un valore
            case 2:
                if(!isEmpty(headPtr)){
                    item = dequeue(&headPtr, &tailPtr);
                    printf("%c has been dequeued.\n", item);
                }

                printQueue(headPtr);
                break;
            default:
                puts("Invalid choice.\n");
                instructions();
                break;
        }

        printf("%s", "? ");
        scanf("%u", &choice);
    }

    puts("End of run.");
}

// stampa le istruzioni per l'utente
void instructions(void)
{
    printf("Enter your choice:\n"
            "   1 to add an item to the queue\n"
            "   2 to remove an item from the queue\n"
            "   3 to end\n");
}

// inserisci un nodo in fondo alla coda
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
    QueueNodePtr newPtr = malloc(sizeof(QueueNode));

    if(newPtr != NULL){
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        if(isEmpty(*headPtr)){
            *headPtr = newPtr;
        }
        else{
            (*tailPtr)->nextPtr = newPtr;
        }

        *tailPtr = newPtr;
    }
    else{
        printf("%c not inserted. No memory available.\n", value);
    }
}

// rimuovi un nodo dalla testa della coda
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
    char value = (*headPtr)->data;
    QueueNodePtr tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;

    if(*headPtr == NULL){
        *tailPtr = NULL;
    }

    free(tempPtr);
    return value;
}

// restuituisci 1 se la coda è vuota, altrimenti 0
int isEmpty(QueueNodePtr headPtr)
{
    return headPtr == NULL;
}

// stampa la coda
void printQueue(QueueNodePtr currentPtr)
{
    if(currentPtr == NULL){
        puts("Queue is empty.\n");
    }
    else{
        puts("The queue is: ");

        while(currentPtr != NULL){
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}