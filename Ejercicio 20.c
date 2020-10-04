#include <conio.h>
#include <stdio.h>


int main()
{
    //ingresas numero y sale el mes
    char nombre[11];
    int mes;

    printf( "\n   Introduzca el numero del mes: ");
    scanf( "%d", &mes );

    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 : printf ("Enero", nombre );
                      break;
            case  2 : printf ("Febrero",nombre );
                      break;
            case  3 : printf ("Marzo", nombre );
                      break;
            case  4 : printf ("Abril", nombre );
                      break;
            case  5 : printf ( "Mayo", nombre );
                      break;
            case  6 : printf ( "Junio", nombre );
                      break;
            case  7 : printf( "Julio", nombre );
                      break;
            case  8 : printf ( "Agosto", nombre );
                      break;
            case  9 : printf ( "Septiembre",nombre );
                      break;
            case 10 : printf ( "Octubre", nombre );
                      break;
            case 11 : printf( "Noviembre", nombre );
                      break;
            case 12 : printf("Diciembre", nombre );
        }
        printf( "\n   %s", nombre );
    }
    else
        printf( "\n   ERROR no hay mes" );

    getch(); /* Pausa */
    return 0;
}
