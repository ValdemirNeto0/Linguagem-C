#include<stdio.h>
#include<stdlib.h>
/*Suponha que você está programando um módulo contador de cédulas para caixas eletrônicos.
Escreva um programa que informa com quantas cédulas de Real podemos representar um dado valor.
Exemplo de resposta: R$ 218 = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1.
Procure minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha que a máquina sempre tem disponíveis
as cédulas necessárias.*/
int main(){
    int c100,c10,c5,c2,m1,valor_saque;
    printf("Digite o valor que deseja sacar:\n");
    scanf("%d", &valor_saque);
    c100 = valor_saque/100;
    c10 = (valor_saque%100)/10;
    c5 = ((valor_saque%100)%10)/5;
    c2 = (((valor_saque%100)%10)%5)/2;
    m1 = ((((valor_saque%100)%10)%5)%2);
    printf("cedulas de 100: %d\ncedulas de 10: %d\ncedulas de 5: %d\ncedulas de 2: %d\nmoedas de 1: %d", c100,c10,c5,c2,m1);
    return 0;
}