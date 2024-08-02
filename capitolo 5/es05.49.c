// Es. 5.49: es05_49.c
// Quiz sui dati del riscaldamento globale
#include <stdio.h>

int quiz(void);

int main(void)
{    
    int canswers = quiz();

    if(canswers == 5){
        puts("");
        puts("Excellent");
    }
    if(canswers == 4){
        puts("");        
        puts("Very good");        
    }
    if(canswers <= 3){
        puts("");
        puts("Time to brush up on your knowledge of global warming");
    }

    puts("");
    puts("resources: ");
    puts("https://www.earthday.org/the-climate-change-quiz/");

}

int quiz(void)
{
    int canswers = 0;
    int answer;
    puts("Which of the following is a greenhouse gas (GHG)?");
    puts("a) CO2");
    puts("b) CH4");
    puts("c) Water vapor");
    puts("d) All of the above");

    answer = getchar();

    switch (answer){
        case 'a':
        case 'A':
            break;

        case 'b':
        case 'B':
            break;

        case 'c':
        case 'C':
            break;

        case 'd':
        case 'D':
            ++canswers;
            break;

        default:
            puts("Enter a valid answer.");
    }

    puts("What was agreed to in the “Paris Agreement” that came out of COP-21, held in Paris in 2015?");
    puts("a) To protect biodiversity and end the deforestation of the world’s rainforests");
    puts("b) To keep global temperature rise well below 2℃ pre-industrial levels and to pursue a path to limit warming to 1.5℃");
    puts("c) To limit sea level rise to 3 feet above current levels");
    puts("d) To pursue a goal of 100 percent clean, renewable energy");

    scanf(" %c", &answer);

    switch (answer){
        case 'a':
        case 'A':
            break;

        case 'b':
        case 'B':
            ++canswers;
            break;

        case 'c':
        case 'C':
            break;

        case 'd':
        case 'D':
            break;

        default:
            puts("Enter a valid answer.");
    }


    puts("What percentage of the global greenhouse gas emissions does the transportation sector emit?");
    puts("a) 1 percent");
    puts("b) 20 percent");
    puts("c) 33 percent");
    puts("d) 70 percent");

    scanf(" %c", &answer);

    switch (answer){
        case 'a':
        case 'A':
            break;

        case 'b':
        case 'B':
            ++canswers;
            break;

        case 'c':
        case 'C':
            break;

        case 'd':
        case 'D':
            break;

        default:
            puts("Enter a valid answer.");
    }

    puts("Which of these countries emits the most carbon dioxide?");
    puts("a) China");
    puts("b) USA");
    puts("c) Russia");
    puts("d) UK");

    scanf(" %c", &answer);

    switch (answer){
        case 'a':
        case 'A':
            ++canswers;
            break;

        case 'b':
        case 'B':
            break;

        case 'c':
        case 'C':
            break;

        case 'd':
        case 'D':
            break;

        default:
            puts("Enter a valid answer.");
    }

    puts("Globally, which of the following economic sectors emits the largest percentage of greenhouse gas emissions?");
    puts("a) Residential");
    puts("b) Transportation");
    puts("c) Industry");
    puts("d) Electric Power");

    scanf(" %c", &answer);
    
    switch (answer){
        case 'a':
        case 'A':
            break;

        case 'b':
        case 'B':
            break;

        case 'c':
        case 'C':
            break;

        case 'd':
        case 'D':
            ++canswers;
            break;

        default:
            puts("Enter a valid answer.");
            scanf(" %c", &answer);;
    }

    return canswers;

}