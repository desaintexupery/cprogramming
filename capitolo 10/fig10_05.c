// Fig. 10.5: fig10_05.c
// Stampa del valore di un'unione con entrambi i tipi di dati dei membri
#include <stdio.h>

// definizione dell'unione number
union number{
    int x;
    double y;
};

int main(void)
{
    union number value; // definisci la variabile di tipo union

    value.x = 100; // inserisci un intero nell'unione
    printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
            "Put 100 in the integer member",
            "and print both members.",
            "int:", value.x,
            "double:", value.y);

    value.y = 100.0; // inserisci un double nella stessa unione
    printf("%s\n%s\n%s\n %d\n\n%s\n %f\n",
            "Put 100.0 in the floating member",
            "and print both members.",
            "int:", value.x,
            "double:", value.y);
}