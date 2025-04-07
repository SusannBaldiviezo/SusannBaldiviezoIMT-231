#include <stdio.h>
int main(){
    int x, y;
    printf("Ingrese un numero ");
    scanf("%d", &x);
    if (x > 0){
        printf("El numero es positivo");
        }else if (x < 0){
            printf("El numero es negativo");
            }else{
                printf("El numero es cero");
                }
    return 0;
}
