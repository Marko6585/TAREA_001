/**EJERCICIO 10: ESCRIBIR UN PROGRAMA EN C QUE IMPRIMA EN LA PANTALLA
EL SIGUIENTE MENU Y QUE LEA LA OPCION DEL USUARIOA A TRAVES DEL TECLADO
DE ACUERDO A LA OPCION, EL PROGRAMA DEBE REALIZAR LAS SIGUIENTES OPERACIONES:
1.-CALCULAR EL AREA DE UN TRANGULO (BASE,ALTURA)
2.-CALCULAR EL AREA DE UN TRAPECIO(LADO A, LADO B, ALTURA)
3.-CALCULAR EL AREA DE UN RECTANGULO (BASE, ALTURA) **/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int a;
    float base,altura,ladoa,ladob,resultado,triangulo,trapecio,rectangulo;
    printf("PROGRAMA PARA CALCULAR EL AREA DE LAS SIGUIENTES OPCIONES\n");
    printf("\n\n1.- CALCULAR EL AREA DE UN TRIANGULO"
           "\n\n2.- CALCULAR EL AREA DE UN TRAPECIO"
           "\n\n3.- CALCULAR EL AREA DE UN RECTANGULO");
    printf("\n\nINGRESE LA OPCION DESEADA: ");
    scanf("%d",&a);
    switch(a){
        case 1:
                printf("\n\nINGRESE LA BASE: ");
                scanf("%f",&base);
                printf("\n\nINGRESE LA ALTURA: ");
                scanf("%f",&altura);
                triangulo=(base*altura)/2;
                printf("\n\nEL AREA DEL TRIANGULO ES: %f",triangulo);
                break;
        case 2:
                printf("\n\nINGRESE EL LADO A: ");
                scanf("%f",&ladoa);
                printf("\n\nINGRESE EL LADO B: ");
                scanf("%f",&ladob);
                printf("\n\nINGRESE LA ALTURA: ");
                scanf("%f",&altura);
                trapecio=altura*((ladoa+ladob)/2);
                printf("\n\nEL AREA DEL TRIANGULO ES: %f",trapecio);
                break;
        case 3:
                printf("\n\nINGRESE LA BASE: ");
                scanf("%f",&base);
                printf("\n\nINGRESE LA ALTURA: ");
                scanf("%f",&altura);
                rectangulo=base*altura;
                printf("\n\nEL AREA DEL TRIANGULO ES: %f",rectangulo);
                break;
                default:;
    }
}
