// Es. 5.40: es05_40.c
// main ricorsiva
// Si può chiamare la funzione main ricorsivamente? Scrivete un programma contenente
// una chiamata alla funzione main. Includete la variabile locale static count
// inizializzata a 1. Postincrementate e stampate il valore di count ogni volta che
// main è chiamata. Fate eseguire il programma. Che cosa accade?

void useStaticLocal(void);

int main(void)
{
    main();
    useStaticLocal();
}

void useStaticLocal(void)
{
    static int count = 1;
    printf("%d", count);
    count++;
}