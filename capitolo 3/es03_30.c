// Es. 3.30: es03_30.c
// Problema dell'else sospeso
// Determinare l'output per ognuna delle seguenti istruzioni quando
// x è 9 e y è 11, e quando x è 11 e y è 9. Il compilatore ignora
// l'indentazione in un programma in C. Inoltre, il compilatore associa
// sempre un else al precedente if, a meno che non gli venga detto di
// fare diversamente con l'uso delle parentesi graffe {}. Dal momento
// che, a prima occhiata, non potete essere sicuri di quale if si accoppi
// con un else, questo si definisce "problema dell'else sospeso". Abbiamo
// eliminato l'indentazione dal seguente codice per rendere il problema
// più impegnativo. [Suggerimento: applicate le convenzioni sull'indentazione
// che avete imparato.]
// a) if ( x < 10 )
//    if ( y > 10 )
//    puts( "*****" );
//    else
//    puts( "#####" );
//    puts( "$$$$$" );
// b) if ( x < 10 ) {
//    if ( y > 10 )
//    puts( "*****" );
//    }
//    else {
//    puts( "#####" );
//    puts( "$$$$$" );
//    }
#include <stdio.h>

int main( void )
{
    int x = 9;
    int y = 11;

    if ( x < 10 )
        if ( y > 10 )
            puts( "*****" );
        else 
            puts( "#####" );
            puts( "$$$$$" );
        

    if ( x < 10 ) {
        if ( y > 10 ) {
            puts( "*****" );
        }
        else {
            puts( "#####" );
            puts( "$$$$$" );
        }
    }

    x = 11;
    y = 9;

   
    if ( x < 10 ) 
        if ( y > 10 )
            puts( "*****" );
        else 
            puts( "#####" );
            puts( "$$$$$" );
        

    if ( x < 10 ) {
        if ( y > 10 ) {
            puts( "*****" );
        }
        else {
            puts( "#####" );
            puts( "$$$$$" );
        }
    } 
}