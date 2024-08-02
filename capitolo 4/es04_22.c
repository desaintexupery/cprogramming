// Es. 4.22: es04_22.c
// Calcolo della media dei voti
// Modificate il programma della figura 4.7 in modo che esso calcoli la media
// dei voti per una classe
#include <stdio.h>

int main(void)
{
    int grade;
    int total = 0;
    int count = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");


    while((grade = getchar()) != EOF) {


        switch (grade) { 

            case 'A':
            case 'a': 
                total += 5;
                ++count;
                break; 

            case 'B': 
            case 'b':
                total += 4;
                ++count;
                break;

            case 'C':
            case 'c':
                total += 3;
                ++count;
                break;

            case 'D': 
            case 'd': 
                total += 2;
                ++count;
                break;

            case 'F': 
            case 'f':
                total += 0;
                ++count;
                break;

            case '\n': 
            case '\t': 
            case ' ': 
                break;

            default: 
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break; 
            }
    }    grade = total / count;
    
    printf( "The average grade for the class was " );
    
    switch(grade)
    {
        case 5:
            printf( "A.\n" );
            break;
        case 4:
            printf( "B.\n" );
            break;
        case 3:
            printf( "C.\n" );
            break;
        case 2:
            printf( "D.\n" );
            break;
        default:
            printf( "F.\n" );
            break;
    } 
}