#include <stdio.h>
int main(){
    int x, y;
    printf("Ingrese un primer numero \n");
    scanf("%d", &x);
    printf("Ingrese un segundo numero \n");
    scanf("%d", &y);
    if (x > y){
        printf("El primer numero es mayor \n");
        }else if (x < y){
            printf("El segundo numero es mayor \n");
            }else{
                printf("Los numeros son iguales \n");
                }
    return 0;

    }
