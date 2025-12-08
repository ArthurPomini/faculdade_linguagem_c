/*
Questão 4 ( for) 

Cenário: É preciso calcular a pontuação total de um jogador após 5 partidas. 

Desafio: Desenvolva um programa que use um laço for para solicitar a pontuação de 5 partidas. Ao final, o programa deve exibir a pontuação total acumulada. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, pont, pontTotal;
    pont = 0;
    pontTotal = 0;
    i = 0;

    for (i=1; i<=5; i++) {
        printf("Digite a pontuacao da %da partida: ", i);
        scanf(" %d", &pont);

        pontTotal += pont;
    }
    printf("A pontuacao total das 5 partidas foi de %d.", pontTotal);

    system("pause");
    return 0;
}