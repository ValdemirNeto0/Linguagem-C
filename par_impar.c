#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.*/
int main(){
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    if(numero%2 == 0){
        printf("%d eh par!", numero);
    }else{
        printf("%d eh impar", numero);
    }
    return 0;
}