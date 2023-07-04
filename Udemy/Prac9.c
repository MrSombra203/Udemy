#include <stdio.h>
#include <stdlib.h>

int main(){
    int Can, Con_Apro = 0, Con_Susp = 0;
    float nota;
    printf("Coloque la cantidad de alumnos:\n");
    scanf("%d", &Can);

    for (int i = 1; i <= Can; i++){
        printf("Coloqur la nota del alumno %d\n", i);
        scanf("%f", &nota);
        if (nota >= 5){
            Con_Apro++;
        }else{
            Con_Susp++;
        }
    }
    printf("La cantidad de alumnos aprobados es: %d\n La cantidad de alumnos Suspendidos es: %d\n", Con_Apro, Con_Susp);
}