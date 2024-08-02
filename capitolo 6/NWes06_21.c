// Es. 6.21: es06_21.c
// Sistema di prenotazione per compagnie aeree
#include <stdio.h>
#define SEATS 11

int main(void)
{
    int seat[SEATS] = {0};
    char choice;
    int available;
    int i = 0, j = 5, x = 0;


    puts("Please type 1 for \"first class\"");
    printf("%s", "Please type 2 for \"economy\": ");
    ++x;
    choice = getchar();
while(x <= 10){

    switch (choice)
    {
    case '1':
        ++i;
        while(i <= 5){
        ++seat[i];
        ++x;
        break;
        }
        if(i > 5){
            printf("%s", "First class is full. Would you be interested in an economy seat? (1-no, 2-yes): ");
            scanf("%d", &choice);
        }
        break;
    
    case '2':
        ++j;
        while(j <= 10){
            ++seat[j];
            break;
        }
        if(j > 10){
            puts("No seats available");
            ++x;
            break;
        }
        break;
    
    default:
        break;
    }

    puts("Please type 1 for \"first class\"");
    printf("%s", "Please type 2 for \"economy\": ");
    scanf(" %c", &choice);

    if(x > 10){
        break;
    }
}

puts("\n\n\t\t\t   FIRST CLASS");
    for(int a = 1; a <= 5; ++a){
        if(a == 1){
            printf("\t%d", a);
        }
        if(a == 2 || a == 3){
            printf("%d\t\t", a);
        }
        else
        printf("%d\t", a);
    }
puts("");
    for(int b = 1; b <= 5; ++b){
        if(b == 1){
            printf("\t%d", seat[b]);
        }
        if(b == 2 || b == 3){
            printf("%d\t\t", seat[b]);
        }
        else
        printf("%d\t", seat[b]);
    }

puts("\n\n\t\t\t   SECOND CLASS");
    for(int a = 6; a <= 10; ++a){
        if(a == 6){
            printf("\t%d", a);
        }
        if(a == 7 || a == 8){
            printf("%d\t\t", a);
        }
        else
        printf("%d\t", a);
    }
puts("");
    for(int b = 6; b <= 10; ++b){
        if(b == 6){
            printf("\t%d", seat[b]);
        }
        if(b == 7 || b == 8){
            printf("%d\t\t", seat[b]);
        }
        else
        printf("%d\t", seat[b]);
    }

}
