// Fig. 9.10 fig09_10.c
// Allineamento a destra e a sinistra di valori
#include <stdio.h>

int main(void)
{
    puts("1234567890123456789012345678901234567890\n");
    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
    printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1,23);
}