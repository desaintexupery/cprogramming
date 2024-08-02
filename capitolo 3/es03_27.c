// Es. 3.27: es03_27.c
// Convalidare l'input dell'utente
// Modificate il programma nella figura 3.10 per convalidare
// i suoi input. Per qualunque input, se il valore inserito è
// diverso da 1 o da 2, continuate l'iterazione finché l'utente
// non inserisce un valore corretto.
int main( void )
{
    
    unsigned int passes = 0; 
    unsigned int failures = 0;
    unsigned int student = 1; 
    unsigned int result; 

    while ( student <= 10 ) {

       
        printf( "%s", "Enter result ( 1=pass,2=fail ): " );
        scanf( "%u", &result );
    
    if ( result == 1 ) {
        if ( result == 1 ) {
            passes = passes + 1;
            student = student + 1; 
        } }
    if ( result == 2 ) { 
            failures = failures + 1;
            student = student + 1; 
        }
    }

    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    if ( passes > 8 ) {
        puts( "Bonus to instructor!" );
    } 
}