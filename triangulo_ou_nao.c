#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes valores
podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno.*/
int main(){
    int X,Y,Z,triangulo,maior,menor1,menor2;
    printf("Digite o lado X:\n");
    scanf("%d", &X);
    printf("Digite o lado Y:\n");
    scanf("%d", &Y);
    printf("Digite o lado Z:\n");
    scanf("%d", &Z);
    //determinar o maior e os menores
    if(X>Y && X>Z){
        maior = X;
        menor1 = Y;
        menor2 = Z;
    }else if(Y>X && Y>Z){
        maior = Y;
        menor1 = X;
        menor2 = Z;
    }else if(Z>X && Z>Y){
        maior = Z;
        menor1 = X;
        menor2 = Y;
    }
    //determina se pode ser triangulo ou nao
    if(maior<menor1+menor2){
        printf("Triangulo!\n");
        //determina qual o tipo do triangulo
        if(X==Y && X==Z){
        printf("Triangulo Equilatero");
        }else if(X==Y && X!=Z){
        printf("Triangulo Isoceles");
        }else{
        printf("Triangulo Escaleno");
        }
    }else{
        printf("Nao eh triangulo!\n");
    }
    return 0;
}