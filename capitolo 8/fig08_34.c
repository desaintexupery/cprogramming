// Fig. 8.34: fig08_34.c
// Uso della funzione strerror
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%s\n", strerror(2));
}