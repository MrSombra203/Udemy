#include <stdio.h>
#include <stdlib.h>

void Mul_Vec(int* vector, int N_Elem, int numero);

int main(){
    int vector[10] = {1,2,3,4,5,6,7,8,9,10};
    Mul_Vec(&vector[0], 10, 3);
    for (int i = 0; i < 10; i++){
        printf("Multiplicacion %d: %d\n", (i+1), vector[i]);
    }
}

void Mul_Vec(int* vector, int N_Elem, int numero){
    for (int i = 0; i < N_Elem; i++){
        *(vector + i) = *(vector + i) * numero; 
    }
    
}