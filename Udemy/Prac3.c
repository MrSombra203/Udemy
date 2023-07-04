#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, altura, area;
    printf("Ponga la base del rectangulo:\n");
    scanf("%f", &base);
    printf("Ponga la altura del rectangulo:\n");
    scanf("%f", &altura);
    area = base * altura;

    printf("El area del triangulo es de %.2f", area);
}