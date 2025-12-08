/*
Questão 2 ( if-else) 

Cenário: 
Um jogo online precisa de verificar se um jogador tem a pontuação mínima para entrar numa partida classificada (ranqueada). 

Desafio: 
Elabore um programa que solicite a pontuação de um jogador. Se a pontuação for maior ou igual a 5000, exiba "Qualificado para partida ranqueada!". Caso contrário, exiba  "Pontuação insuficiente.". 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int pontuacao;

    printf("Fala Jogador! Para saber se esta apto ou nao para jogar a ranqueada, digite a sua pontuacao atual: ");
    scanf(" %d", &pontuacao);

    if (pontuacao >= 5000)
        printf("Perfeito Jogador! Voce esta apto a participar de partidas ranqueadas, seja muito bem vindo.");
    else
        printf("Pontuacao insuficiente. Conquiste a pontuacao necessaria para estar apto a jogar partidas ranqueadas.");

    system("pause");
    return 0;
}