/**EJERCICIO 5: ESCRIBIR UN PROGRAMA EN C QUE IMPRIMA EN LA PANTALLA EL PRECIO DEL BOLETO
DE UNA ENTRADA AL CINE DE ACUERDO A LA EDAD DEL USUARIO. EL PROGRMA DEBE LEER
LA EDAD DEL USUARIO Y CALCULAR EL COSTO COMO SIGUE:
            -ENTRADA NORMAL: 75 PESOS.
            -NIÑOS: DESCUENTO DEL 60 POR CIENTO.
            -ADULTOS MAYORES DE 60 AÑOS: DESCUENTO DEL 55 POR CIENTO.
**/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int edad,d1;
    float d2;
    int p=75;
    printf("PRECIOS\n\n\n-ENTRADA NORMAL:75 PESOS\n\n\n-NINOS(MENORES DE 12): 60 POR CIENTO DE DESCUENTO\n\n\n"
           "-ADULTOS MAYORES DE 60: 55 POR CIENTO DE DESCUENTO\n\n\n");
    printf("\n\nINGRESE SU EDAD: ");
    scanf("%d",&edad);
    if (edad<12){
        d1=75*.60;
        printf("\n\nEL PRECIO DE LA ENTRADA ES:%d\n\n",p-d1);
    }
    else if (edad>=12&&edad<60){
        printf("\n\nEL PRECIO DE LA ENTRADA ES:%d\n\n",p);
    }
    else if (edad>60){
        d2=75*.55;
        printf("\n\nEL PRECIO DE LA ENTRADA ES:%f\n\n",p-d2);

    }
}
