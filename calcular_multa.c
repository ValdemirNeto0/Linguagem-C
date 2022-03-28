#include<stdio.h>
#include<stdlib.h>
/*Questao 10
Escreva um programa que receba a velocidade máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela.
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h que estiver acima da velocidade permitida
(considere apenas números inteiros).
Se a velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa.*/
int main(){
    int velocidade_maxima, velocidade, multa;
    printf("Digite a velocidade maxima na avenida:\n");
    scanf("%d", &velocidade_maxima);
    printf("Digite a velocidade na qual estava dirigindo:\n");
    scanf("%d", &velocidade);
    if(velocidade > velocidade_maxima){
        multa = (velocidade-velocidade_maxima)*5;
        printf("Multa: %d", multa);
    }else{
        printf("Nao ha multa");
    }
    return 0;
}