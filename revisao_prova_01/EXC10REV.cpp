/*
Questão 10 (Laços e Manipulação de Strings)

Cenário: Um sistema de chat de jogo precisa de uma funcionalidade para censurar palavras proibidas.

Desafio: Desenvolva um programa que leia uma frase e censure a palavra "bomba", substituindo-a por "*****".
Use um laço para percorrer a frase e, sempre que encontrar a sequência "bomba", substitua os caracteres. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char frase[40]="", censurado[]="bomba";
    int teste, tamanhoCens;

    tamanhoCens = strlen(censurado);

    printf("Escreva uma frase qualquer: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    for (int i=0; i<strlen(frase); i++) {                                   // laço para verificar letra por letra da frase
        if (strncmp(&frase[i], censurado, tamanhoCens) == 0)  {             // se comparar frase[i] com "bomba" e achar, então
            for (int j = 0; j < tamanhoCens; j++) {                         // laço para alterar os caracteres de "bomba" por asterisco
                frase[i+j] = '*';                                           // frase[10+0] = '*' ... frase [10+1] = '*' ... frase[10+2] = '*'
            }
        }
    }

    printf("Frase Censurada: %s \n", frase);
    
    system("pause");
    return 0;
}