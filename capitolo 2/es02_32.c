// Es. 2.32: es02_32.c
// Calcolatore dell'indice di massa corporea
// Le formule per calcolare l'indice di massa corporea (BMI) sono
// BMI = ((weightInPounds) * 703) / (heightInInches) * (heightInInches))
// oppure
// BMI = (weightInKilograms / ((heightInMeters) * (heightInMeters)))
// Create un'applicazione, che sia un calcolatore di BMI, che legga il peso
// dell'utente in libbre e l'altezza in pollici (o, se preferite, il peso
// dell'utente in kilogrammi e l'altezza in metri), poi calcolate e mostrate
// l'indice di massa corporea dell'utente. L'applicazione deve anche mostrare
// le seguenti informazioni tratte dal Department of Health and Human
// Services / National Institute of Health, così che l'utente possa valutare
// il suo BMI:
// VALORI del BMI
// Sottopeso:   meno di 18.5
// Normale:     tra 18.5 e 24.9
// Sovrappeso:  tra 25 e 29.9
// Obeso:       30 e oltre
// [Nota: in questo capitolo avete imparato a usare il tipo int per
// rappresentare i numeri interi. I calcoli del BMI fatti con i valori int
// producono in entrambi i casi risultati interi. Nel capitolo 4 imparerete
// a usare il tipo double per rappresentare numeri con il punto decimale.
// Quando i calcoli del BMI sono eseguiti con il tipo double, producono in
// entrambi i casi numeri con il punto decimale, chiamati numeri "in virgola
// mobile".]
#include <stdio.h>

int main( void )
{
        int weightInKilograms;
        int heightInMeters;
        int BMI;

        printf( "Inserisci il tuo peso in kilogrammi: " );
        scanf( "%d", &weightInKilograms );
        printf( "Inserisci la tua altezza in metri: " );
        scanf( "%d", &heightInMeters );

        BMI = weightInKilograms / ( heightInMeters * heightInMeters );

        printf( "Il tuo indice di massa corporea è: %d\n", BMI );
        printf( "VALORI del BMI\nSottopeso:\tmeno di 18.5\nNormale:\ttra 18.5 e 24.9\nSovrappeso:\ttra 25 e 29.9\nObeso:\t\t30 e oltre");
}