// Fig. 7.21: fig07_21.c
// Copia di una stringa usando le notazioni con array e con puntatori.
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2); // prototipo
void copy2(char *s1, const char *s2); // protipo

int main(void)
{
    char string1[SIZE]; // crea l'array string1
    char *string2 = "Hello"; // crea un puntatore a una stringa

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    char string3[SIZE]; // crea l'array string3
    char string4[] = "Good Bye"; // crea un puntatore a una stringa

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}

// copia s2 in s1 usando la notazione con array
void copy1(char * const s1, const char * const s2)
{
    // effettua un ciclo lungo le stringhe
    for(size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i){
        ; // non fare niente nel corpo
    }
}

// copia s2 in s1 usando la notazione con puntatori
void copy2(char *s1, const char *s2)
{
    // effettua un ciclo lungo le stringhe
    for(; (*s1 = *s2) != '\0'; ++s1, ++s2){
        ; // non fare niente nel corpo
    }
}