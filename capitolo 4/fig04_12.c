// Fig. 4.12: fig04_12.c
// Uso dell'istruzione continue in un'istruzione for.
#include <stdio.h>

int main(void)
{
    // ripeti 10 volte
    for (unsigned int x = 1; x <= 10; ++x) {

        // se x è 5, continua con la successiva iterazione del ciclo
        if (x== 5) {
            continue; // salta il restante codice nel corpo del ciclo
        }

        printf("%u ", x);
    }

    puts("\nUsed continue to skip printing the value 5");
}