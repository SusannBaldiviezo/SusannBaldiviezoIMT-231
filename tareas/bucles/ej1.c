#include <stdio.h>
int main(void){
    int num, i;
printf("Ingrese un numero entero positivo: \n");
scanf("%d", &num);
for (i=1; i<=num; i++){
    printf("%d\n", i);
}
return 0;
}