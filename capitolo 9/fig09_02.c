// Fig. 9.2: fig09_02.c
// Uso degli specificatori di conversione di interi
#include <stdio.h>

int main(void)
{
    printf("%d\n", 455);
    printf("%i\n", 455); // i come d in printf
    printf("%d\n", +455); // non viene stampato il segno più
    printf("%d\n", -455); // viene stampato il segno meno
    printf("%hd\n", 32000); 
    printf("%ld\n", 2000000000L); // suffisso L per letterale long int
    printf("%o\n", 455); // ottale
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455); // esadecimale con lettere minuscole
    printf("%X\n", 455); // esadecimale con lettere maiuscoloe
}