#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. 
O programa deve retornar o resultado da operação recebida sobre estes dois números.*/
int main(){
    char operacao;
    float num1, num2;
    printf("Escolha uma operacao(+,-,/,*):\n");
    scanf("%c", &operacao);
    printf("Digite dois numeros inteiros:\n");
    scanf("%f %f", &num1, &num2);
    if(operacao == '+'){
        printf("resultado da operacao: %.2f", num1+num2);
    }else if(operacao == '-'){
        printf("resultado da operacao: %.2f", num1-num2);
    }else if(operacao == '/'){
        printf("resultado da operacao: %.2f", num1/num2);
    }else if(operacao == '*'){
        printf("resultado da operacao: %.2f", num1*num2);
    }else{
        printf("ERROR");
    }
    return 0;
}