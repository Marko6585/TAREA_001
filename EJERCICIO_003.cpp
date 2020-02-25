/**EJERCICIO 3: ESCRIBIR UN PROGRAMA EN C QUE LEA UN NUMERO ENTERO, QUE DETERMINE SI ES PAR O IMPAR,
EN CASO DE QUE SEA IMPAR INDICAR SI ES DIVISIBLE ENTRE TRES**/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int a;
    printf("PROGRAMA QUE DETERMINE SI ES PAR O IMPAR,EN CASO DE QUE SEA IMPAR INDICAR SI ES DIVISIBLE ENTRE TRES\n\n\n");
    printf("INGRESE UN NUMERO ENTERO: ");
    scanf("%d",&a);
    if (a%2==0){
        printf("\n\nEL NUMERO %d ES PAR",a);
        if (a%3==0){
            printf("\n\n\nEL NUMERO %d ES DIVISIBLE ENTRE 3\n\n\n",a);
        }
    }
    else{
        printf("\n\nEL NUMERO %d ES IMPAR",a);
        if (a%3==0){
            printf("\n\n\nEL NUMERO %d ES DIVISIBLE ENTRE 3\n\n\n",a);
        }
    }
}
