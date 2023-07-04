#include <stdio.h>
#include <stdlib.h>

int main (){
    int Precio_inicial, Kilometros;
    float Gasto, Precio_total;

    printf("Coloque el precio inicial del carro:\n");
    scanf("%d", &Precio_inicial);
    printf("Coloque los kilomeros:\n");
    scanf("%d", &Kilometros);
    printf("Coloque el gasto:\n");
    scanf("%f", &Gasto);
    if (Kilometros < 20000 && Gasto <= 5){
        Precio_total = Precio_inicial * 1.2;
    }else if (Kilometros > 20000 && Gasto <= 5){
        Precio_total = Precio_inicial * 1.1;
    }else if (Gasto > 5){
        Precio_total = Precio_inicial * 1.05;
    }
    printf("El precio final del carro es de: %.2f", Precio_total);    
}