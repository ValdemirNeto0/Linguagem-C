#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).*/
void questao_2(){
    int i1,i2,i3;
    float media;
    printf("Digite 3 valores:\n");
    scanf("%d %d %d", i1,i2,i3);
    media = (i1+i2+i3)/3;
    printf("Media dos numeros digitados: %.2f", media);
}