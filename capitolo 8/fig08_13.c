// Fig. 8.13: fig08_13.c
// Uso della funzione sscanf
#include <stdio.h>

int main(void)
{
    char s[] = "31298 87.375"; // inizializza l'array s
    int x; // valore x da leggere
    double y; // valore y da leggere

    sscanf(s, "%d%lf", &x, &y);
    printf("%s\n%s%6d\n%s%8.3f\n", "The value stored in character array s are:",
    "integer:", x, "double:", y);
}