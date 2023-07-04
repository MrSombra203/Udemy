#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadena1[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Coloque la primera cadena:\n");
    gets(cadena1);
    printf("Coloque la segunda cadena:\n");
    gets(cadena2);
    printf("Coloque la tercera cadena:\n");
    gets(cadena3);
    printf("Coloque la cuarta cadena:\n");
    gets(cadena4);
    printf("%s-%s-%s-%s", cadena1, cadena2, cadena3, cadena4);
}