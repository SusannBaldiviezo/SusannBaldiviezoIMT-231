#include <stdio.h>
int main(void){
    int num, sum=0;
    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        sum+=i;
    }
    printf("El numero suma es: %d \n", sum);
    return 0;
}



