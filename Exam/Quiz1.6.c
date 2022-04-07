#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float area, width, lenght, perimeter;
    printf ("Input your width: ");
    scanf ("%f", &width);
    (void) getchar ();
    printf ("Input  your lenght: ");
    scanf ("%f", &lenght);
    (void) getchar ();
    area=width*lenght;
    perimeter=(width+lenght)*2;
    if(width==lenght)
        printf ("Its a square\n");
    else
        printf ("It's a rectangle\n");
    printf ("Area: %g\n", area);
    printf ("Perimeter: %g\n", perimeter);
    putchar ('\n');
 
    return 0;
}