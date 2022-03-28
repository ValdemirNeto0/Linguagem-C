#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles
o menor deles e o valor intermediário.*/
int main(){
    float n1,n2,n3, maior, intermediario, menor;
    printf("Digite os valores:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    if(n1>n2 && n1>n3){
        maior = n1;
        if(n2>n3){
            intermediario = n2;
            menor = n3;
        }else{
            intermediario = n3;
            menor = n2;
        }
    }else if(n2>n1 && n2>n3){
        maior = n2;
        if(n1>n3){
            intermediario = n1;
            menor = n3;
        }else{
            intermediario = n3;
            menor = n1;
        }
    }else{
        maior = n3;
        if(n1>n2){
            intermediario = n1;
            menor = n2;
        }else{
            intermediario = n2;
            menor = n1;
        }
    }
    printf("Maior %.2f\tIntermediario: %.2f\tMenor: %.2f", maior,intermediario,menor);
    return 0;
}