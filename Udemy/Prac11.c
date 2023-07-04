#include <stdio.h>
#include <stdlib.h>

int main(){
    float pesos[5];
    float suma = 0;
    for (int i = 0; i < 5; i++){
        printf("Coloque un peso para guardarlo:\n");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }
    float Promedio = suma / 5;
    int Con_May_Igu = 0;
    int Con_Men = 0;

    for (int i = 0; i < 5; i++){
        if (pesos[i] >= Promedio){
            Con_May_Igu++;
        }else{
            Con_Men++;
        }
    }
    printf("El promedio de los pesos es de: %.2f\n", Promedio);
    printf("El numero de pesos mayor o igual que el promedio de: %d\n El numero de pesos menor que el promedio es de: %d", Con_May_Igu, Con_Men);
}