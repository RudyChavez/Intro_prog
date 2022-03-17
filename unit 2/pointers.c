#include <stdio.h>
#include "../libraries/utils.h"
int edad = 18;

int main(int argc, char** argv){
    printf("el valor de la variable es: %d\n", edad);
    printf("la direccion de la variable edad es: %p\n", &edad);
    //creacion de pointers

    int* MyPtr = NULL; 
    MyPtr = &edad; 
    printf("La variable pointer MyPtr es: %p\n", MyPtr);
    printf("la direccion de la variable MyPtr es: %p\n", &MyPtr);

    //modificacion de un pointer. 

   
    //MyPtr = &mes;
    //MyPtr = &edad;


     //imprimir el valor al que apunta un pointer

     printf("el valor al que apunta MyPtr es: %d\n", *MyPtr);
     printf("el valor de la variable edad es: %d\n", edad);

     //modificar el valor de edad desde un pointer

     //edad = edad * 2; 
     *MyPtr = *MyPtr * 2;

     printf("el valor al que apunta MyPtr es: %d\n", *MyPtr);
     printf("el valor de la variable edad es: %d\n", edad);

     //creating a second pointer

     int* SecondPtr = NULL;
     SecondPtr = MyPtr;



    return 0;

}

