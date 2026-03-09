/*
Questão 9 ( strupr, strlwr e strcmp) 

Cenário: Um jogo de trivia precisa de verificar se a resposta do jogador está correta, ignorando se foi digitada em maiúsculas ou minúsculas. 

Desafio: Crie um programa onde a resposta correta para uma pergunta é "LUA".
O programa deve ler a resposta do jogador, criar cópias da resposta e da resposta correta, converter ambas 
para maiúsculas (ou minúsculas) usando strupr() ou strlwr() e, em seguida, compará-las com strcmp() para validar a resposta. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    
    
    system("pause");
    return 0;
}