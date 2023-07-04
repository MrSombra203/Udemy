#include <stdio.h>
#include <stdlib.h>

int main(){
    int Numeros[10] = {4,7,75,-5,6,12,-15,0,1};
    int Maximo = Numeros[0];
    int Minimo = Numeros[0];

    for (int i = 0; i < 10; i++){
        if (Numeros[i] > Maximo){
            Maximo = Numeros[i];
        }
        if (Numeros[i] < Minimo){
            Minimo = Numeros[i];
        }
    }
    printf("Valor maximo es de: %d\nValor minimo es: %d", Maximo, Minimo);
}