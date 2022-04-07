#include <stdio.h>

int main()
{
    int number1, number2, number3;
    printf( "\n   Please input just whole numbers in  this program" );
    printf( "\n   Input the first number: " );
    scanf( "%d", &number1 );
    printf( "\n   Input the second number: " );
    scanf( "%d", &number2 );
    printf( "\n   Input the third number: " );
    scanf( "%d", &number3 );

    if ( number1 >= number2 && number1 >= number3 )
        printf( "\n   %d is the biggest number.", number1 );
    else

        if ( number2 > number3 )
            printf( "\n   %d is the biggest number.", number2 );
        else
            printf( " \n  %d is the biggest number.", number3 );
            putchar ('\n');
 
  
    return 0;
}