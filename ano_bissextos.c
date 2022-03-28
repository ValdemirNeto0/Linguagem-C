#include<stdio.h>
#include<stdlib.h>
/*Questao 11
Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em diante) e mostrar o número de dias daquele mês daquele ano.
Utilizar switch e levar em consideração anos bissextos para o cálculo.*/
int main(){
    int mes,ano;
    printf("Digite o ano e o mes desejado(1-janeiro, 2- fevereiro ...):\n");
    scanf("%d %d", &ano, &mes);
    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:mes = 31;
        break;
        case 4:
        case 6:
        case 9:
        case 11:mes = 30;
        break;
        case 2:if(ano%4 == 0 && ano%100 != 0 || ano%400){
            mes = 29;
        }else{
            mes = 28;
        }
        break;
        default: printf("Esse numero nao corresponde ao numero de um mes!");
    }
    printf("dias neste mes: %d\nNo ano: %d", mes,ano);
}