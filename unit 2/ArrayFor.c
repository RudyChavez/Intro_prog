#include <stdio.h>

#define SIZE 4 
#define Pi 3.1416
int main(){

     int len = 4;
     int myArray[SIZE] = {5, 1, 20, 60};


    for (int i = 0; i < len; i++ ) {
        printf("currentValue: %d\n", myArray[i]);
        myArray[i] = myArray[i] * 2; 
        printf("updatedValue: %d\n", myArray[i]);
    }
    return 0; 
}