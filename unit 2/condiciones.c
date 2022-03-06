#include <stdio.h>

int main (int argc, char** argv) {

    int a = 10;
    int b = 15;
    int c = 1;
    int d = 8;
    int e = 10;

    //Condiciones logicas//
    _Bool condicion1 = (a > b); //true
    _Bool condicion2 = (c < d); //true
    _Bool condicion3 = (d == a); //false
    _Bool condicion4 = (d != a); //true
    _Bool condicion5 = (a >= e); //true;
    _Bool condicion6 = (e <= e); //true;

    if (condicion1 && condicion5) {
        //some code
        ////
        ////
    } else {
        //some code 2
        //fdgfgdf
    }

    return 0;
}