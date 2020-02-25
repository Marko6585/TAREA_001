/**EJERCICIO 11: ESCRIBIR UN PROGRAMA QUE CALCULE LA PENDIENTE M
DE UNA LINEA UTILIZANDO DOS PUNTOS, DONDE:

                M= (y2-y1)/(x2-x1)
DONDE p1= (x1,y1) es el primer punto y sus coordenadas, p2=(x2,y2) es el segundo punto
y sus coordenadas, si m tiende al infinito imprimir que la linea es vertical. **/
#include <stdio.h>
#include <stdlib.h>
int main (){
    float m,y1,y2,x1,x2;
    printf("\n\nPROGRAMA QUE CALCULA A PENDIENTE A PARTIR DE:"
           "\n\n\tM= (y2-y1)/(x2-x1)");
    printf("\n\n\nINGRESE EL PRIMER PUNTO");
    printf("\n\n\tx1: ");
    scanf("%f",&x1);
    printf("\n\n\ty1: ");
    scanf("%f",&y1);
    printf("\n\nINGRESE EL SEGUNDO PUNTO");
    printf("\n\n\tx2: ");
    scanf("%f",&x2);
    printf("\n\n\ty2: ");
    scanf("%f",&y2);
    while(x2-x1==0){
            printf("\n\nERROR, NO SE PUEDE DIVIDIR ENTRE CERO\n\n");
            printf("\n\n\nINGRESE EL PRIMER PUNTO");
            printf("\n\n\tx1: ");
            scanf("%f",&x1);
            printf("\n\n\ty1: ");
            scanf("%f",&y1);
            printf("\n\nINGRESE EL SEGUNDO PUNTO");
            printf("\n\n\tx2: ");
            scanf("%f",&x2);
            printf("\n\n\ty2: ");
            scanf("%f",&y2);
    }
    m=(y2-y1)/(x2-x1);
    if(m==0){
        printf("\n\nLA LINEA ES HORIZONTAL\n\n");
    }
    else if (m>0||m<0) {
        printf("\n\nLA PENDIENTE ES: %f\n\n",m);
    }
}
