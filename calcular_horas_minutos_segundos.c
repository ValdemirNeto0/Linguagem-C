#include<stdio.h>
#include<stdlib.h>
/*Fazer um programa para
receber do usuário um tempo em segundos, correspondente à duração de um evento qualquer (por ex. jogo de futebol)
calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos*/
int main(){
    int t,s,m,h,r;
    printf("digite o tempo do evento em segundos:\n");
    scanf("%d", &t);
    h = t/3600;
    r = t%3600;
    m = r/60;
    s = r%60;
    printf("Duracao do evento: %dh %dm %ds", h,m,s);
    return 0;
}