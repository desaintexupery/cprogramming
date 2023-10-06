#include <stdio.h>

int main(void) {
    int a,b;

    // ask the user to type a number
    printf("type a number: \n");

    // get and save the number the user types
    scanf("%d", &a);

    // ask the user to type a number
    printf("type a second number: \n");

    //get and save the second number
    scanf("%d", &b);

    printf("sum = %d", a+b);
    
    return 0;
}