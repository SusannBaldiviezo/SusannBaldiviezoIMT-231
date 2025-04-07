#include <stdio.h>
int main(void){
    int x;
    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &x);
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d \n", x, i, x*i);
    }

    return 0;

}
    