//#include <stdio.h>
// int main(void){
// int num, i;
// printf("Ingrese un numero entero positivo: \n");
// scanf("%d", &num);
// for (i=1; i<=num; i++){
//     printf("%d\n", i);
// }
// return 0;
// }

#include <stdio.h>
int main(void) {
    int num;
    int i = 0;
    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &num);
    if (num <= 0) {
        printf("El número debe ser positivo.\n");
        return 1;
    }
    while (i < num) {
        printf("%d\n", i+1);
        i++;
    }
    
    return 0;
}
