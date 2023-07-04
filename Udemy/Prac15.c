#include <stdio.h>
#include <stdlib.h>

int main(){
    char Cadena[50];
    char caracter;
    printf("Coloque una cadena:\n");
    gets(Cadena);
    caracter = getchar();
    int i = 0;
    int pos = -1;
    while (Cadena[i] != '\0' && pos == -1){
        if (Cadena[i] == caracter){
            pos = i;
        }
        i = i + 1;
    }
    if (pos != -1){
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d", caracter, Cadena, pos);
    }else{
        printf("El caracte %c no se encuentra en la cadena %s", caracter, Cadena);
    }
}   