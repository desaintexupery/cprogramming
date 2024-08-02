// Fig. 7.12: fig07_12.c
// Tentativo di modifica di dati con un
// puntatore non costante a dati costanti.
#include <stdio.h>
void f(const int *xPtr); // prototipo

int main(void)
{
    int y; // definisci y

    f(&y); // f tenta una modifica non permessa
}

// xPtr non può essere usato per modificare il
// valore della variabile alla quale punta
void f(const int *xPtr)
{
    //*xPtr = 100; // errore: non si può modificare un oggetto const
}