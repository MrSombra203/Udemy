#include <stdio.h>
#include <stdlib.h>

int main(){
    float vector[5];
    for (int i = 0; i < 5; i++){
        printf("Cloque un numero real\n");
        scanf("%f", &vector[i]);
    }
    float *Puntero = &vector[0];
    float media = 0;
    for (int i = 0; i < 5; i++){
        media = media + *(Puntero + i);
    }
    media = media / 5;
    printf("La media de los valores del vector es de: %.2f\n", media);
}