// Fig. 5.4: fig05_04.c
// Trovare il massimo di tre interi
#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
    int number1; // primo intero inserito dall'utente
    int number2; // secondo intero inserito dall'utente
    int number3; // terzo intero inserito dall'utente

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    // number1, number2 e number3 sono argomenti
    // nella chiamata della funzione maximum
    printf("Maximum is: %d\n", maximum(number1, number2, number3));
}

// definizione della funzione maximum
// x, y, e z sono parametri
int maximum(int x, int y, int z)
{
    int max = x; // supponi che x sia il maggiore

    if(y > max){ // se y è più grande di max,
        max = y; // assegna y a max
    }

    if(z > max){ // se z è più grande di max,
        max = z; // assegna z a max
    }

    return max; // max è il valore più grande
}
