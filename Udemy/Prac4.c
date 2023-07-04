#include <stdio.h>
#include <stdlib.h>

int main(){
    float euros, dolares;
    printf("Coloca los euros que quiras transformar:\n");
    scanf("%f", &euros);
    dolares = euros * 1,10;

    printf("Los euorse que valen %.2f se transformaron en %.2f dolares", euros, dolares);
}