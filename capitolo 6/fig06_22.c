// Fig. 6.22: fig06_22.c
// Manipolazioni di array bidimensionale.
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// prototipi di funzioni
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // inizializza i voti per i tre studenti (righe)
    int studentGrades[STUDENTS][EXAMS] =
      { { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } };

    // stampa l'array studentGrades
    puts("The array is:");
    printArray(studentGrades, STUDENTS, EXAMS);

    // determina i valori minimo e massimo dei voti
    printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS), maximum(studentGrades, STUDENTS, EXAMS));

    // calcola la media dei voti per ogni studente
    for(size_t student = 0; student < STUDENTS; ++student){
        printf("The average grade for student %u is %.2f\n", student, average(studentGrades[student], EXAMS));
    }
}

// Trova il voto minimo
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
    int lowGrade = 100; // voto più alto possibile

    // ciclo per le righe di grades
    for(size_t i = 0; i < pupils; ++i){

        // ciclo per le colonne di grades
        for(size_t j =0; j < tests; ++j){

            if(grades[i][j] < lowGrade){
                lowGrade = grades[i][j];
            }
        }
    }

    return lowGrade; // restituisci il voto minimo
}

int maximum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
    int highGrade = 0; // voto più basso possibile

    // ciclo per le righe di grades
    for(size_t i = 0; i < pupils; ++i){

        // ciclo per le colonne di grades
        for(size_t j =0; j < tests; ++j){

            if(grades[i][j] > highGrade){
                highGrade = grades[i][j];
            }
        }
    }

    return highGrade; // restituisci il voto massimo
}

// Determina il voto medio per ogni studente
double average(const int setOfGrades[], size_t tests)
{
    int total = 0; // somma dei voti degli esami

    // totale di tutti i voti per uno studente
    for(size_t i = 0; i < tests; ++i){
        total += setOfGrades[i];
    }

    return (double) total / tests; // media
}

// Stampa l'array
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests)
{
    // stampa le intestazioni delle colonne
    printf("%s", "                 [0]  [1]  [2]  [3]");

    // stampa i voti in formato tabellare
    for(size_t i = 0; i < pupils; ++i){

        // stampa l'etichetta per la riga
        printf("\nStudentGrades[%u] ", i);

        // stampa i voti per uno studente
        for(size_t j = 0; j < tests; ++j){
            printf("%-5d", grades[i][j]);
        }
    }
}