/**EJERCICIO 1: ESCRIBR UN PROGRAMA EN C QUE LEA UN NUMERO ENTERO DEL TECLADO E IMPRIMA SI ES MAYOR QUE 100**/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int a=0;
    printf("PROGRAMA PARA SABER SI UN NUMERO ES MAYOR QUE 100\n\n\n");
    printf("INGRESE UN NUMERO: ");
    scanf("%d",&a);
    if (a>100){
        printf("\n\n\nEL NUMERO %d ES MAYOR QUE 100\n\n\n",a);
    }
}
