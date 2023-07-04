#include <stdio.h>
#include <stdlib.h>

int main(){
    int Suma = 0, Contador = 0, Numero = -1;
    while (Numero != 0){
        printf("Coloque un numero:\n");
        scanf("%d", &Numero);
        Contador++;
        Suma += Numero;
    }
    float Promedio = Suma / Contador;
    printf("La suma de los numeros es: %d\n El promedio es de: %.2f", Suma, Promedio);
}