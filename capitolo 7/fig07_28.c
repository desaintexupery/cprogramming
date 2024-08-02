// Fig. 7.28: fig07_28.c
// Esempio di un array di funtatori a funzioni
#include <stdio.h>

// prototipi
void function1(int a);
void function2(int b);
void function3(int c);

int main(void)
{
    // inizializza un array di 3 puntatori a funzioni che ricevono
    // ognuna un argomenti int e restituiscono void
    void (*f[3])(int) = {function1, function2, function3};

    printf("%s", "Enter a number between 0 and 2, 3 to end: ");
    unsigned int choice; // variabile che contiene la scelta dell'utente
    scanf("%u", &choice);

    // elabora la scelta dell'utente
    while(choice >= 0 && choice < 3){

        // invoca la funzione alla locazione choice nell'array f e passa
        // choice come argomento
        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 2, 3 to end: ");
        scanf("%u", &choice);
    }

    puts("Program execution completed.");
}

void function1(int a)
{
    printf("You entered %d so function1 was called\n\n", a);
}

void function2(int b)
{
    printf("You entered %d so function2 was called\n\n", b);
}

void function3(int c)
{
    printf("You entered %d so function3 was called\n\n", c);
}