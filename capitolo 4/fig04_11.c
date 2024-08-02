// Fig. 4.11: fig04_11.c
// Uso dell'istruzione break in un'istruzione for.
#include <stdio.h>

int main(void)
{
    unsigned int x; // dichiarato qui per un utilizzo dopo il ciclo

    // ripeti 10 volte
    for(x = 1; x <= 10; ++x) {

        // se x è 5, termina il ciclo
        if (x == 5) {
            break; // interrompi il ciclo solo se x è 5
        }

        printf("%u ", x);
    }

    printf("\nBroke out of loop at x == %u\n", x);
}