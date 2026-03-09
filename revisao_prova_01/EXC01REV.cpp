/*
Questão 1 ( printf, scanf) 
Cenário: Uma loja de videojogos está a fazer uma promoção. 
Desafio: Crie um programa que solicite o nome de um jogo e o seu preço original. Em seguida, 
calcule e exiba o novo preço com um desconto de 20%.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char jogo[20];
    float preco;

    printf("Digite o nome do jogo: ");
    fgets(jogo, 20, stdin);
    
    printf("Digite o preço do jogo: ");
    scanf(" %f", &preco);

    preco = preco * 0.8;
    printf("O preço do jogo com o desconto de 20%% aplicado é: %.2f", preco);

    system("pause");
    return 0;
}