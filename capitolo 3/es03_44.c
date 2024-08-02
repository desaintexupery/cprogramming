// Es. 3.44: es03_44.c
// Lati di un triangolo rettangolo
// Scrivete un programma che legga tre numeri interi diversi
// da zero e determini e stampi se possono essere i lati di un
// triangolo rettangolo.
int main(void)
{
    int side1, side2, side3;

    printf("Inserisci il primo lato: ");
    scanf("%d", &side1);
    while(side1 == 0){
        printf("Inserire un valore diverso da 0.\n");
        printf("Inserisci il primo lato: ");
        scanf("%d", &side1);
    }
    printf("Inserisci il secondo lato: ");
    scanf("%d", &side2);
        while(side2 == 0){
        printf("Inserire un valore diverso da 0.\n");
        printf("Inserisci il secondo lato: ");
        scanf("%d", &side2);
    }
    printf("Inserisci il terzo lato: ");
    scanf("%d", &side3);
    while(side3 == 0){
        printf("Inserire un valore diverso da 0.\n");
        printf("Inserisci il terzo lato: ");
        scanf("%d", &side3);
    }

    if(side1 + side2 == side3 || side1 + side3 == side2 || side2 + side3 == side1){
        printf("I valori inseriti compongono un triangolo rettangolo.");
    }

}