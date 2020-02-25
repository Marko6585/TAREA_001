/**EJERCICIO 8: ESCRIBE UN PROGRAMA EN C QUE LEA TRES NUMEROS
DEL TECLADO Y LOS IMPRIMA DE MENOR A MAYOR
**/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b,c;
    printf("PROGRAMA QUE LEE TRES NUMEROS \N DEL TECLADO Y LOS IMPRIME DE MENOR A MAYOR");
    printf("\n\nINGRESE EL PRIMER NUMERO ENTERO: ");
    scanf("%d",&a);
    printf("\n\nINGRESE EL SEGUNDO NUMERO ENTERO: ");
    scanf("%d",&b);
    printf("\n\nINGRESE EL TERCER NUMERO ENTERO: ");
    scanf("%d",&c);
    if(a<b&&b<c){
        printf("%d",a);
        printf("%d",b);
        printf("%d",c);
    }
    else if (b<a&&a<c){
        printf("%d",b);
        printf("%d",a);
        printf("%d",c);
    }
    else if(c<b&&b<a){
        printf("%d",c);
        printf("%d",b);
        printf("%d",a);
    }
}
