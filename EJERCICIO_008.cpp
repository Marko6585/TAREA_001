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
    if(c>b&&b>a) {
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",a,b,c);
    }
    else if(a>b&&b>c){
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",c,b,a);
    }
    else if(a>b&&c>a) {
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",b,a,c);
    }
    else if(a>c&&c>b){
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",b,c,a);
    }
    else if(b>c&&b>a&&a>c){
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",c,a,b);
    }
      else if(a==b&&c>a&&c>b){
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",a,b,c);
    }
      else if(c==b&&a>b&&a>c){
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",b,c,a);
    }

    else {
        printf("\n\nEL ORDEN ES EL SIGUIENTE: %d\t%d\t%d\n\n",a,c,b);
    }

}
