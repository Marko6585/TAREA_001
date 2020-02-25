/**EJERCICIO 9 (SWITCH): ESCRIBIR UN PROGRAMA QUE LEA UN CARACTER Y UTILIZANDO
UN SENTENCIA SWITCH INDICAR SI ES UN NUMERO O UNA LETRA,
HACER LO MISMO CON IF. **/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int a;
    printf("PROGRAMA QUE LEE UN CARACTER E INDICA SI ES UN NUMERO O UNA LETRA");
    printf("INGRESE UN CARACTER:");
    scanf("%d",&a);
    switch(a){
        case 0: printf("Es un numero\n\n");
                break;
        case 1: printf("Es un numero\n\n");
                break;
        case 2: printf("Es un numero\n\n");
                break;
        case 3: printf("Es un numero\n\n");
                break;
        case 4: printf("Es un numero\n\n");
                break;
        case 5: printf("Es un numero\n\n");
                break;
        case 6: printf("Es un numero\n\n");
                break;
        case 7: printf("Es un numero\n\n");
                break;
        case 8: printf("Es un numero\n\n");
                break;
        case 9: printf("Es un numero\n\n");
                break;
        default: printf("Es una letra\n\n");
        }
}

