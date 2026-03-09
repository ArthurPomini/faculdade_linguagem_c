/*
Questão 8 ( Laços Aninhados) 

Cenário: Um desenvolvedor de jogos precisa de criar uma barra de vida para um personagem, representada por caracteres. 

Desafio: Elabore um programa que solicite a vida atual e a vida máxima de um personagem (ambos de 0 a 10). 
O programa deve usar laços for aninhados para desenhar uma barra de vida com 10 segmentos, usando | para a vida atual e - para a vida perdida.
Ex: [|||||-----] para 5 de 10 de vida.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i=0, vidaAt, vidaMax;
    char vida[11]="";

    printf("Digite a vida maxima do personagem (0 a 10): ");
    scanf(" %d", &vidaMax);

    printf("Digite a vida atual do personagem (0 a %d): ", vidaMax);
    scanf(" %d", &vidaAt);

    strcat(vida, "[");
    for (i=0; i<vidaAt; i++) { // for para contar vida atual
        strcat(vida, "|");
    }
    for (i=vidaAt; i<=vidaMax; i++) { // for para contar vida
        strcat(vida, "-");
    }
    strcat(vida, "]");

    printf("\n%s para %d de %d vida.", vida, vidaAt, vidaMax);
    
    system("pause");
    return 0;
}