#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Jugador{
        char Nombre[50];
        int Edad;
        float Altura;
    };

    struct Jugador Jugadores[5];
    for (int i = 0; i < 5; i++){
        printf("Cloque el nombre del jugador: %d\n", i + 1);
        gets(Jugadores[i].Nombre);
        printf("Coloque la edad del jugador: %d\n", i + 1);
        scanf("%d", &Jugadores[i].Edad);
        printf("Coloque la altura del jugador: %d\n", i + 1);
        scanf("%f", &Jugadores[i].Altura);
        fflush(stdin);
    }

    int opcion = -1;
    while (opcion != 0){
        printf("Coloque la opcion que quiera realizar:\n 1)Listar jugadores\n 2)Buscar Jugador\n 3)Jugador mas alto\n 0)Salir\n");
        scanf("%d", &opcion);
        fflush(stdin);
        if (opcion == 1){
            for (int i = 0; i < 5; i++){
                printf("El jugador %s y de altura %.2f\n", Jugadores[i].Nombre, Jugadores[i].Altura);
            }
        }
        if (opcion == 2){
            char Nombre_Jugador[50];
            printf("Coloque el nombre del jugador que desea buscar:\n");
            gets(Nombre_Jugador);
            int encontrado = 0;
            for (int i = 0; i < 5; i++){
                if (strcmp(Jugadores[i].Nombre,Nombre_Jugador) == 0){
                    encontrado = 1;
                    printf("La edad del jugador es de %d y su altura de %.2f\n", Jugadores[i].Edad, Jugadores[i].Altura);
                }                
            }
            if (encontrado == 0){
                printf("Jugador no encotrado\n");
            }
        }
        if (opcion == 3){
            float may_alt = Jugadores[0].Altura;
            char nom_may_alt[50];
            int eda_may_alt = Jugadores[0].Edad;
            strcpy(nom_may_alt, Jugadores[0].Nombre);
            for (int i = 0; i < 5; i++){
                if (Jugadores[i].Altura > may_alt){
                    strcpy(nom_may_alt,Jugadores[i].Nombre);
                    eda_may_alt = Jugadores[i].Edad;
                    may_alt = Jugadores[i].Altura;
                }
            }
            printf("El jugjugador con mayor altura es %s y su edad es de %d", nom_may_alt, eda_may_alt);
        }   
    }
}