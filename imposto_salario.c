#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*A tabela abaixo foi copiada do website da Receita Federal
e traz as alíquotas do imposto de renda de pessoa física retido na fonte para o exercício de 2013:

Até 1.637,11                          -%                -
De 1.637,12 até 2.453,50              7,5%              122,78
De 2.453,51 até 3.271,38              15,0%             306,80
De 3.271,39 até 4.087,65              22,5%             552,15
Acima de 4.087,65                     27,5%             756,53

A base de cálculo é dada pelo salário mensal, com certas deduções, como dependentes e contribuição previdenciária.
Abstraindo estes e outros detalhes, o imposto devido é calculado tomando a base de cálculo mensal, verificando a faixa na qual ela se encontra, aplicando a alíquota correspondente, e reduzindo o valor final da parcela a deduzir.
Por exemplo, se a base de cálculo é de R$10.000,00, a alíquota é de 27,5%, ou seja, R$2750,00. Deduzimos R$756,53 da parcela e obtemos como resultado final R$1993,47 de imposto devido.

Escreva um programa que receba como entrada a base de cálculo mensal de um trabalhador e retorne o imposto de renda devido.
*/
int main(){
    float sal_men, aliquota, resultado_aliquota, imposto;
    printf("Digite o salario mensal:\n");
    scanf("%f", &sal_men);
    if(sal_men > 1637.11){
        if(sal_men > 2453.50){
            if(sal_men > 3271.38){
                if(sal_men > 4087.65){
                    resultado_aliquota = (sal_men*27.5)/100;
                    imposto = resultado_aliquota-756.53;
                    printf("Imposto a pagar: %.2f", imposto);
                }else{
                    resultado_aliquota = (sal_men*22.5)/100;
                    imposto = resultado_aliquota-552.15;
                    printf("Imposto a pagar: %.2f", imposto);
                }
            }else{
                resultado_aliquota = (sal_men*15.0)/100;
                imposto = resultado_aliquota-306.80;
                printf("Imposto a pagar: %.2f", imposto);
            }
        }else{
            aliquota = 7.5;
            resultado_aliquota = (sal_men*7.5)/100;
            imposto = resultado_aliquota-122.78;
            printf("Imposto a pagar: %.2f", imposto);
        }
    }else{
        printf("Nao havera imposto");
    }
    return 0;
}