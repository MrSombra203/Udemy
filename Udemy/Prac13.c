#include <stdio.h>
#include <stdlib.h>

int main(){
    int informacion[3][4] = {(1,120,150,220),
                             (2,130,160,230),
                             (3,100,120,200)};
    int Sum_tem_baj = 0, Sum_tem_med = 0, Sum_tem_alt = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 1; j < 4; j++){
            if (j == 1){
                Sum_tem_baj = Sum_tem_baj + informacion[i][j];
            }else if (j == 2){
                Sum_tem_med = Sum_tem_med + informacion[i][j];
            }else if (j == 3){
                Sum_tem_alt = Sum_tem_alt + informacion[i][j];
            }
        }
    }
    float Pro_tem_baj = Sum_tem_baj / 3;
    float Pro_tem_med = Sum_tem_med / 3;
    float Pro_tem_alt = Sum_tem_alt / 3;
    printf("El promedio en temporada baja es de: %.2f\nEl promedio en temporada media es de: %.2f\nEl promedio en temporada alta es de: %.2f", Pro_tem_baj, Pro_tem_med, Pro_tem_alt);
}