// Fig. 09_24: fig09_24.c
// Lettura ed eliminazione di caratteri dallo stream di input
#include <stdio.h>

int main(void)
{
    int month = 0;
    int day = 0;
    int year = 0;

    printf("%s", "Enter a date in the form mm-dd-yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

    printf("%s", "Enter a date in the form mm/dd/yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);
}