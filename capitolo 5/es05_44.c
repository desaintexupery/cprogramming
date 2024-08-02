// Es. 5.44: es05_44.c
// Dopo che determinate che cosa fa il programma dell'Esercizio 5.33, modificate il programma
// perché funzioni correttamente dopo aver rimosso la restrizione riguardo alla non negatività
// del secondo argomento.
#include <stdio.h>,

int mystery(a, b);

int main(void)
{
    printf("%s", "Enter two integers: ");
    int x;
    int y;
    scanf("%d%d", &x, &y);

    printf("The result is: %d", mystery(x, y));
}

int mystery(a, b)
{
    if(1 == b){
        return a;
    }
    else{
        return a + mystery(a, b - 1);
    }
}