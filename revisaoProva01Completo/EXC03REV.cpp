/*
Questão 4 ( for) 
Cenário: É preciso calcular a pontuação total de um jogador após 5 partidas. 
Desafio: Desenvolva um programa que use um laço for para solicitar a pontuação de 5 
partidas. Ao final, o programa deve exibir a pontuação total acumulada. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int classe;

    printf("Bem Vindo ao CesuRPG. Por favor, escolha sua classe de heroi:\n1-Guerreiro\n2-Mago\n3-Arqueiro\n");
    scanf(" %d", &classe);

    switch (classe)
    {
        case 1:
            printf("Classe Escolhida: Guerreiro");
            break;
        case 2:
            printf("Classe Escolhida: Mago");
            break;
        case 3:
            printf("Classe Escolhida: Arqueiro");
            break;
        default:
            printf("Essa classe nao existe.");
            break;
    }

    system("pause");
    return 0;
}