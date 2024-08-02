// Fig. 8.12: fig08_12.c
// Uso della funzione sprintf
#include <stdio.h>
#define SIZE 80

int main(void)
{
    int x; // valore x da leggere
    double y; // valore y da leggere

    puts("Enter an integer and a double:");
    scanf("%d%lf", &x, &y);

    char s[SIZE]; // crea un array di char
    sprintf(s, "integer:%6d\ndouble:%7.2f", x, y);

    printf("%s\n%s\n", "The formatted output stored in array s is: ", s);
}