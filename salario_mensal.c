#include<stdio.h>
#include<stdlib.h>
/*Escreva um programa que calcule o salário semanal de um trabalhador.
As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional.
Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.*/
int main(){
    float ht, vh, sal;
    printf("Digite a quantidade de horas trabalhadas na semana:\n");
    scanf("%f", &ht);
    printf("Digite o valor da hora:\n");
    scanf("%f", &vh);
    if(ht > 40){
        if(ht >60){
            sal = ((vh*2)*ht);
            printf("\nSalario deste mes: %.2f", sal);
        }else{
            sal = ((vh+((vh*50)/100))*ht);
            printf("\nSalario deste mes: %.2f", sal);
        }
    }else{
        sal = vh*ht;
        printf("\nSalario deste mes: %.2f", sal);
    }
    return 0;
}