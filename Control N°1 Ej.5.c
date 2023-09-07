#include <stdio.h>

int main(){
    float nota1,nota2,nota3,nota4;
    printf("Nota 1: ");
    scanf("%d\n",nota1);
    printf("Nota 2: ");
    scanf("%d\n",nota2);
    printf("Nota 3: ");
    scanf("%d\n",nota3);
    printf("Nota 4: ");
    scanf("%d\n",nota4);

    float sum=0;
    sum=nota1+nota2+nota3+nota4;
    sum=sum/4;

    printf("La nota final es: %f",sum);
}