#include <stdio.h> //its just a comment     

//Datatype:
//create a variable: dataType anyName; | DataType anyName = 12; // solo se declara una vez

int myInt = 24; //-> text format: %i %d 
float myFloat = 22.7; //-> text format: %f
char myChar = 'l';
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0, 1, 2, 3, 4, 5, 6 ...n 
char word[4] = {'R','u','d','y'};
char country[10] = "mexico"; // %s
char* aName = "Ivan"; 

int main(){

    myInt = 25; 
    printf("hola clase, myInt = %i\n", myInt);
   printf("hola clase, myFloat = %f\n", myFloat);
   printf("hola clase, myChar = %c\n", myChar);
   printf("hola clase, myArray1 = %d\n", myArray[0]);
    printf("hola clase, myArray2 = %d\n", myArray[1]);
    printf("hola clase, myArray3 = %d\n", myArray[2]);
    printf("hola clase, myArray4 = %d\n", myArray[3]);
    printf("hola clase, myArray5 = %d\n", myArray[4]);
    printf("hola clase, myArray6 = %d\n", myArray[5]);
    printf("hola clase, myArray7 = %d\n", myArray[6]);
    printf("hola clase, word = %c\n", word[0]);
    printf("hola clase, word = %c\n", word[1]);
    printf("hola clase, word = %c\n", word[2]);
    printf("hola clase, word = %c\n", word[3]);
    printf("hola clase, country = %s\n", country);
    printf("hola clase, aName = %s\n", aName);
    return 0;
}