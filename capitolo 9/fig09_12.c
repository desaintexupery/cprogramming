// Fig. 9.12 fig09_12.c
// Stampa di numeri positivi e negativi con e senza il flag +
#include <stdio.h>

int main(void)
{
    printf("%d\n%d\n", 786, -786);
    printf("%+d\n%+d\n", 786, -786);
}