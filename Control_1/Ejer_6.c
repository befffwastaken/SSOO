#include <stdio.h>

int main(){
    float nota1,nota2,nota3,nota4;
    printf("Nota 1: ");
    scanf("%d",nota1);
    printf("Nota 2: ");
    scanf("%d",nota2);
    printf("Nota 3: ");
    scanf("%d",nota3);
    
    float sum=0;
    sum=(nota1*0.4)+(nota2*0.3)+(nota3*0.3);

    if(sum<3.95){
        printf("Usted ha reprobado la asignatura");
    }else if(sum>4.95){
        printf("Usted se ha eximido de la asignatura");
    }else{
        printf("Usted tiene que dar examen");
    }
}