#include <stdio.h>

int main(){
    int lado1,lado2,lado3;
    printf("Ingrese el valor del primer lado del triangulo:");
    scanf("%d\n",lado1);
    printf("Ingrese el valor del segundo lado del triangulo:");
    scanf("%d\n",lado2);
    printf("Ingrese el valor del tercer lado del triangulo:");
    scanf("%d\n",lado3);

    if(lado1=!lado2 && lado2!=lado3){
        printf("El triangulo es escaleno");
    }else if(lado1==lado2 || lado2==lado3){
        printf("El triangulo es isósceles");
    }else if(lado1==lado2==lado3){
        printf("El triangulo es equilatero");
    }
}