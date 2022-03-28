#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Questao 14
Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos
se acertarem o vencedor ou se acertarem que foi empate,
e ganham mais 5 pontos para o placar de cada time que acertarem.
A tabela a seguir dá um exemplo, considerando que o placar real foi 3x2:
0x1  0  nao acertou o bevncedor nem o placar
0x2  5  nao acertou o vencedor, porem acertou os gols do segundo time
3x5  5  nao acertou o vencedor, porem acertou os gols do primeiro time
1x0  10 acertou o vencedor, porem errou o placar
3x1  15 acertou o vencedor e os gols do primeiro time
3x2  20 acertou o vencedor e os gols dos dois filmes
Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e informa quantos pontos o apostador fez.
*/
int main(){
    int gol1_apostado,gol2_apostado,gol1_ocorreu,gol2_ocorreu,pontos,vencedor_apostado,vencedor_ocorreu;
    printf("Digite quantos gols voce apostou do primeiro time:\n");
    scanf("%d", &gol1_apostado);
    printf("Digite quantos gols voce apostou do segundo time:\n");
    scanf("%d", &gol2_apostado);
    printf("Digite quantos gols o prmiero time marcou:\n");
    scanf("%d", &gol1_ocorreu);
    printf("Digite quantos gols voce apostou do primeiro time:\n");
    scanf("%d", &gol2_ocorreu);
    printf("placar apostado: %d x %d\nplacar definido %d x %d", gol1_apostado,gol2_apostado,gol1_ocorreu,gol2_ocorreu);
    //quem ganhou no jogo
    if(gol1_ocorreu > gol2_ocorreu){
        vencedor_ocorreu = 1;
    }else{
        vencedor_ocorreu = 2;
    }
    //quem apostou que ganhou
    if(gol1_apostado > gol2_apostado){
        vencedor_apostado = 1;
    }else{
        vencedor_apostado = 2;
    }
    //resultados:
    if(vencedor_apostado == vencedor_ocorreu){
        if(gol1_apostado != gol1_ocorreu && gol2_apostado != gol2_ocorreu){
            pontos = 10;
            printf("\nPontos: %d\nAcertou o vencedor porem errou o placar do dois time!", pontos);
        }else if(gol1_apostado == gol1_ocorreu && gol2_apostado != gol2_ocorreu){
            pontos = 15;
            printf("\nPontos: %d\nAcertou o vencedor e o placar do primeiro time!", pontos);
        }else if(gol1_apostado != gol1_ocorreu && gol2_apostado == gol2_ocorreu){
            pontos = 15;
            printf("\nPontos: %d\nAcertou o vencedor e o placar do segundo time!", pontos);
        }else{
            pontos = 20;
            printf("\nPontos: %d\nAcertou o vencedor e o placar dos dois times!", pontos);
        }
    }else{
        if(gol1_apostado != gol1_ocorreu && gol2_apostado != gol2_ocorreu){
            pontos = 0;
            printf("\nPontos: %d\nNao acertou o vencedor e nem o placar!", pontos);
        }else if(gol1_apostado == gol1_ocorreu && gol2_apostado != gol2_ocorreu){
            pontos = 5;
            printf("\nPontos: %d\nNao acertou o vencedor porem acertou o placar do primeiro time!", pontos);
        }else if(gol1_apostado != gol1_ocorreu && gol2_apostado == gol2_ocorreu){
            pontos = 5;
            printf("\nPontos: %d\nNao acertou o vencedor porem acertou o placar do segundo time!", pontos);
        }else{
            //nao tem como acertar o placar dos dois time sem ter acertado o vencedor
        }
    }
    return 0;
}