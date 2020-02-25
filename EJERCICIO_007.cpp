/**EJERCICIO 7: ESCRIBIR UN PROGRAMA QUE LEA TRES NUMEROS DEL TECLADO
Y QUE IMPRIMA ACCESO ACEPTADO SI LOS VALORES SON 3,9,5.
**/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b,c;
    printf("PROGRAMA QUE LEE TRES NUMEROS DEL TECLADO\nY QUE IMPRIME ACCESO ACEPTADO SI LOS VALORES SON 3,9,5.");
    printf("\n\nINGRESE EL PRIMER NUMERO ENTERO: ");
    scanf("%d",&a);
    printf("\n\nINGRESE EL SEGUNDO NUMERO ENTERO: ");
    scanf("%d",&b);
    printf("\n\nINGRESE EL TERCER NUMERO ENTERO: ");
    scanf("%d",&c);
    if (a==3&&b==9&&c==5){
        printf("\n\nAcceso aceptado\n\n");
    }
}
