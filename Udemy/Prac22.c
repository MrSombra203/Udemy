#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Practica numero 21

int main(){
    struct Cilindro{
        float Diametro;
        float Carrera;
    };
    
    struct Motor{
        int identificador;
        struct Cilindro Cilindro1;
        int Num_Cilindro;
        float Cilindrado;
    };

    struct Motor Motor1;
    printf("Coloque el identificador\n");
    scanf("%d", &Motor1.identificador);
    printf("Coloque el diametro del cilindro (mm)\n");
    scanf("%f", &Motor1.Cilindro1.Diametro);
    printf("Coloque la carrera del cilindro (mm)\n");
    scanf("%f", &Motor1.Cilindro1.Carrera);
    printf("Coloque el numero de cilindros\n");
    scanf("%d",&Motor1.Num_Cilindro);
    Motor1.Cilindrado = (Motor1.Cilindrado * (Motor1.Cilindro1.Carrera / 10) *M_PI*pow((Motor1.Cilindro1.Diametro / 10),2))/4;
    printf("identificador es: %d\n", Motor1.identificador);
    printf("Diametro en mm: %.2f\n", Motor1.Cilindro1.Diametro);
    printf("Carrera en mm es: %.2f\n", Motor1.Cilindro1.Carrera);
    printf("Numero de cilindros es: %d\n", Motor1.Num_Cilindro);
    printf("El cilindrado es: %.2f\n", Motor1.Cilindrado);
}