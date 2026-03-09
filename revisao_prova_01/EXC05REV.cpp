/*
Questão 5 ( while e strcmp)

Cenário: Um sistema precisa de validar uma palavra-passe de acesso. 

Desafio: Crie um programa que defina uma palavra-passe secreta (ex: "admin123"). Em seguida, use um laço while para solicitar repetidamente que o utilizador digite a palavra-passe. 
O laço deve continuar até que o utilizador digite a palavra-passe correta. Use strcmp() da biblioteca <string.h> para a comparação. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char senha[] = "admin123", dig[10];
    int c=1;

    while (c != 0) {
        printf("Digite a senha correta para obter acesso: ");
        scanf(" %s", &dig);
        c = strcmp(dig, senha);
    }

    printf("Acesso concedido.");
    

    system("pause");
    return 0;
}