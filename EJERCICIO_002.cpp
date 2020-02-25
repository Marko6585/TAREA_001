/**EJERCICIO 2: ESCRIBIR UN PROGRAMA EN C QUE LEA DOS ENTEROS DEL TECLADO Y QUE IMPRIMA SI EL PRIMERO
ES DIVISIBLE ENTRE EL SEGUNDO**/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b,c;
    printf("PROGRAMA PARA SABER SI EL PRIMER NUMERO ES DIVISIBLE ENTRE EL SEGUNDO\n\n\n");
    printf("INGRESE EL PRIMER NUMERO ENTERO: ");
    scanf("%d",&a);
    printf("\n\nINGRESE EL SEGUNDO NUMERO ENTERO: ");
    scanf("%d",&b);
    while(b==0){
            printf("\n\nERROR\n\n");
            printf("NUEVAMENTE INTRODUCE EL SEGUNDO NUMERO: ");
            scanf("%d",&b);
    }
    c=a%b;
    if (c==0){ /**a%b==0**/
        printf("\n\n\nEL NUMERO %d ES DIVISIBLE ENTRE %d\n\n\n",a,b);
    }
    else {
        printf("\n\n\nEL NUMERO %d NO ES DIVISIBLE ENTRE %d\n\n\n",a,b);
    }
}
