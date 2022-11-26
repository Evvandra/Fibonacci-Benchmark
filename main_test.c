#include <stdio.h>

#include "mylib/mylib.h"

int main(void){

    int N = 10;

    printf("The fibonacci number for %d is %d\n", N, iterativeFibonacci(10));
    printf("The fibonacci number for %d is %d\n", N, recursiveFibonacci(10));


    for (int i = 0; i <= N; i++){
        if (iterativeFibonacci(i) != recursiveFibonacci(i)) {
            printf("ERROR at %i\n",i);
        } else {
            printf("The fibonacci number F%d = %d (iterative), %d (recursive)\n", i, iterativeFibonacci(i), recursiveFibonacci(i));
        }
    }
    
    return 0; 
    
}