// Es. 4.38: es04_38.c
// La canzone "The Twelve Days of Christmas"
// Scrivete un programma che utilizzi le istruzioni di iterazione e l'istruzione switch 
// per stampare la canzone "The Twelve Days of Christmas". Va usata una sola istruzione
// switch per stampare il giorno (cioè "first", "second", ecc.). Dovete poi usare
// un'istruzione switch separata per stampare il resto di ogni verso.
#include <stdio.h>

int main(void)
{
    int day;
    puts("THE TWELVE DAYS OF CHRISTMAS\n\n");

    printf("%s", "On the ");    
    scanf("%d", &day);
    switch (day)
        {
        case 1:
            puts("st day of Christmas");
            break;
        case 2:
            puts("nd day of Christmas");
            break;
        case 3:
            puts("rd day of Christmas");
            break;
        case 4:
            puts("th day of Christmas");
            break;
        case 5:
            puts("th day of Christmas");
            break;
        case 6:
            puts("th day of Christmas");
            break;
        case 7:
            puts("th day of Christmas");
            break;
        case 8:
            puts("th day of Christmas");
            break;
        case 9:
            puts("th day of Christmas");
            break;
        case 10:
            puts("th day of Christmas");
            break;
        case 11:
            puts("th day of Christmas");
            break;
        case 12:
            puts("th day of Christmas");
            break;
        default:
            break;
        }
    
    puts("my true love sent to me");
    for (int x = day; x <= day; x--){
         switch(x)
        {
            case 1: 
                printf("\t\t");
            if (day > 1 ){
                printf("And ");}
                puts("A Partridge in a Pear Tree");
                break;
            case 2: 
                printf("\t\tTwo Turtle Doves\n"); 
                break;
            case 3: 
                printf("\t\tThree French Hens\n"); 
                break;
            case 4:    
                printf("\t\tFour Calling Birds \n"); 
                break;
            case 5: 
                printf("\t\tFive Golden Rings\n"); 
                break;
            case 6: 
                printf("\t\tSix Geese a Laying\n"); 
                break;
            case 7: 
                printf("\t\tSeven Swans a Swimming\n"); 
                break;
            case 8: 
                printf("\t\tEight Maids a Milking\n"); 
                break;
            case 9: 
                printf("\t\tNine Ladies Dancing\n"); 
                break;
            case 10:   
                printf("\t\tTen Lords a Leaping\n"); 
                break;
            case 11: 
                printf("\t\tEleven Pipers Piping\n"); 
                break;
            case 12: 
                printf("\t\tTwelve Drummers Drumming\n"); 
                break;
            default:
                break;
        }
    }
}
