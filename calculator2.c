#include <stdio.h>

int main(void) {

    int a, b;

    // ask the user to type a number
    printf("type a number: \n");

    // get and save the number the user types
    scanf("%d", &a);

    // ask the user to type a number
    printf("type a second number: \n");

    // get and save the number the user types
    scanf("%d", &b);

    if ( a > b ) {
        printf("a maggiore di b");
    } else if ( a < b ) {
        printf("a minore di b");
    } else {
        printf("a e b sono uguali");
    }

    return 0;
}