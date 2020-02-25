/**EJERCICIO 4: ESCRIBIR UN PROGRAMA EN C QUE LEA DOS NUMEROS ENTEROS DEL TECLADO Y QUE IMPRIMA CUAL
DE LOS DOS ES MAYOR. CONSIDERE TAMBIEN CUANDO LOS DOS VALORES SON IGUALES**/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b;
    printf("PROGRAMA QUE LEA DOS NUMEROS ENTEROS DEL TECLADO Y \nQUE IMPRIMA CUAL DE LOS DOS ES MAYOR\n\n\n");
    printf("INGRESE EL PRIMER NUMERO ENTERO: ");
    scanf("%d",&a);
    printf("\n\nINGRESE EL SEGUNDO NUMERO ENTERO: ");
    scanf("%d",&b);
    if (a>b){
        printf("\n\n\nEL NUMERO %d ES MAYOR QUE %d \n\n\n",a,b);
    }
    else if (a<b) {
        printf("\n\n\nEL NUMERO %d ES MAYOR QUE %d \n\n\n",b,a);
    }
    else if (a==b) {
        printf("\n\n\nEL NUMERO %d ES IGUAL QUE %d \n\n\n",a,b);
    }
    else {
        printf("\n\n\n\n\n\n");
    }
}
