#include <stdio.h>

#define SIZE 5 
#define Pi 3.1416
int main(){

     int myArray[SIZE] = {5, 1, 20, 60, 15};


    for (int i = 0; i < SIZE - 1; i++ ) {
        printf("i = %d \n", i);
        printf("Array[%d] = %d , Array[%d] = %d\n", i, myArray[i], i + 1, myArray[i + 1]);
        
    }
    printf("..................\n");

    for(int i = SIZE - 1; i >= 0; i--){
        printf("i = %d\n", i);
        printf("currentValue: %d\n", myArray[i]);
    }
    printf("..................\n");


    for (int i = 0; i < SIZE; i++ ) {
        printf("i = %d \n", i);
        printf("Array[%d] = %d , Array[%d] = %d\n", i, myArray[i], (SIZE - 1) - i, myArray[SIZE -1 - i]);

    }
    printf("..................\n");

    return 0; 
}