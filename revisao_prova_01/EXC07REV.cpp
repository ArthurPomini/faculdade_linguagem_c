/*
Questão 7 ( strcat e strcpy) 

Cenário: Um sistema precisa de gerar um "gamertag" (nome de jogador) completo, juntando um nome e um clã. 

Desafio: Crie um programa que solicite um nome de jogador e o nome de um clã.
Use strcpy() para iniciar o gamertag e strcat() para juntar as partes, formando uma tag no formato [CLÃ]Nome.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomeJog[20], nomeCla[10], gamertag[50]="";

    printf("Digite o nome do jogador: ");
    fgets(nomeJog, 20, stdin);

    printf("Digite o nome do cla: ");
    scanf(" %s", &nomeCla);

    strcpy(nomeCla, strupr(nomeCla));
    
    strcat(gamertag, "[");
    strcat(gamertag, nomeCla);
    strcat(gamertag, "]");

    strcat(gamertag, nomeJog);

    printf("%s", gamertag);

    system("pause");
    return 0;
}