#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){

printf("benvenido, usted ingreso el numero: %s\n", argv[1]);
int numero = atol(argv[1]);
bool DividedBy = numero%2 == 0;

if (DividedBy)(
    printf("el numero %s es par\n", argv[1])
);

else(
    printf("el numero %s es impar\n", argv[1])
);


return 0;
}