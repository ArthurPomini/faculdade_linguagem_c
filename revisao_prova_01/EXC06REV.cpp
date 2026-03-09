/*
Questão 6 ( do-while e fgets) 

Cenário: Um sistema de cadastro de clãs de jogos precisa de garantir que o nome do clã tenha um tamanho mínimo. 

Desafio: Elabore um programa que solicite um nome para um clã.
Use um laço do-while para garantir que o nome tenha pelo menos 4 caracteres.
Use fgets() para ler o nome (para permitir espaços) e strlen() para verificar o tamanho. Não se esqueça de tratar o \n capturado pelo fgets.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomeCla[20];

    do {
        printf("Digite o nome do seu cla (minimo 4 caracteres) para cadastra-lo: ");
        fgets(nomeCla, 20, stdin);
        nomeCla[strcspn(nomeCla, "\n")] = '\0';
    } while (strlen(nomeCla) < 4);

    printf("\nNome Cadastrado!");

    system("pause");
    return 0;
}