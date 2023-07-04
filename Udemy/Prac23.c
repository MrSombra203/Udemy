#include <stdio.h>
#include <stdlib.h>
//Esta es la practica numero 22

int main(){
    struct Hora_Entrada{
        int Hora;
        int Minuto;
    };

    struct Entrada{
        struct Hora_Entrada Hora;
        int Asistentes;
        float Precio;
    };
    struct Entrada Entra;
    char Continuar = 's';
    while (Continuar == 's'){
        printf("Coloque la hora de entrada\n");
        scanf("%d", &Entra.Hora.Hora);
        printf("Coloque el minuto de entrada\n");
        scanf("%d", Entra.Hora.Minuto);
        printf("Coloca el numero de hacistentes\n");
        scanf("%d", &Entra.Asistentes);
        int total = 0;
        for (int i = 0; i < Entra.Asistentes; i++){
            int edad;
            printf("Coloque la edad del asistente %d\n", (i+1));
            scanf("%d", &edad);
            if (edad < 6){
                total = total + 0;
            }else if (edad >= 6 && edad <= 15){
                total = total + 5;
            }else if ((edad >= 16 && edad <= 26) || edad > 65){
                total = total + 5;
            }else{
                total = total + 10;
            }
        }
        if (Entra.Asistentes >= 5){
            Entra.Precio = total - total*0.1;
        }else{
            Entra.Precio = total;
        }
        printf("Hora de entrada del grupo es: %d\n", Entra.Hora.Hora);
        printf("Minto de entrada del grupo es: %d\n", Entra.Hora.Minuto);
        printf("El precio de entrada es de: %.2f\n", Entra.Precio);

        printf("Deseas continuar con otro grupo?(s/n)\n");
        scanf("%c", &Continuar);
        while (Continuar == '\n'){
            scanf("%c", &Continuar);
        }
    }
}