// Es. 3.31: es03_31.c
// Un altro problema di else sospeso
// Modificate il seguente codice per produrre l'output mostrato.
// Usate le tecniche di indentazione. Non potete fare cambiamenti
// diversi dall'inserimento di parentesi graffe. Il compilatore
// ignora l'indentazione in un programma. Abbiamo eliminato
// l'indentazione dal seguente codice al fine di rendere il problema
// più impegnativo. [Nota: è possibile che non sia necessaria alcuna
// modifica.]
// if ( y == 8 )
// if ( x == 5 )
// puts( "@@@@@" );
// else
// puts( "#####" );
// puts( "$$$$$" );
// puts( "&&&&&" );
// a) Supponendo x = 5 e y = 8, viene prodotto il seguente output.
// @@@@@
// $$$$$
// &&&&&
// b) Supponendo x = 5 e y = 8, viene prodotto il seguente output.
// @@@@@
// c) Supponendo x = 5 e y = 8, viene prodotto il seguente output.
// @@@@@
// &&&&&
// Supponendo x = 5 e y = 7, viene prodotto il seguente output.
// #####
// $$$$$
// &&&&&
#include <stdio.h>

int main( void )
{
    int x = 5;
    int y = 8;

    if ( y == 8 ){
    if ( x == 5 ) {
    puts( "@@@@@" );}
    else {
    puts( "#####" );
    }
    puts( "$$$$$" );
    puts( "&&&&&" );
    }

    if ( y == 8 ) {}
    if ( x == 5 )
    puts( "@@@@@" );
    else {
    puts( "#####" );
    puts( "$$$$$" );
    puts( "&&&&&" );
    }
    
    if ( y == 8 )
    if ( x == 5 )
    puts( "@@@@@" );
    else{
    puts( "#####" );
    puts( "$$$$$" );}
    puts( "&&&&&" );    

    y = 7;

    if ( y == 8 ) {
    if ( x == 5 ) {
    puts( "@@@@@" );
    }
    }
    else {
    puts( "#####" );
    puts( "$$$$$" );
    puts( "&&&&&" );
    }
}