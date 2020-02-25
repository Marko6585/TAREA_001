/**EJERCICIO 6: ESCRIBIR UN PROGRAMA EN C QUE CALCULE EL VALOR DE LA FUNCION
F(X) DEPENDIENDO EL VALOR DE X

                F(x)=   {x+3  si x<=0
                        {x^2+2x si x>0
**/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c;
    printf("PROGRAMA QUE CALCULA EL VALOR DE LA FUNCION F(x) DEPENDIENDO EL VALOR DE X"
                "\n\n\tF(x)=\t{x+3  si x<=0"
                "\n\n\t\t{x^2+2x si x>0\n\n\n");
    printf("Ingrese el valor de x: ");
    scanf("%d",&a);
    if (a<=0){
        b=a+3;
        printf("\n\nEl resultado es: %d\n\n",b);
    }
    else{
        c=(a*a)+(2*a);
        printf("\n\nEl resultado es: %d\n\n",c);
    }
}
