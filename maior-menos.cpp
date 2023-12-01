#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 1)Desenvolver um programa que peça ao usuário informar dois números. */
/* O programa deverá informar o seguinte: */

/* a) Qual é o maior número? */
/* b) Qual é o menor número? */
/* c) Os números são iguais? */



int main() {
    int numero1, numero2;
    setlocale(LC_ALL, "Portuguese");

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Estrutura condicional
    if (numero1 > numero2) {
        printf("O número 1 é o maior.\n");
        printf("O número 2 é o menor.\n");
    } else if (numero1 < numero2) {
        printf("O número 2 é o maior.\n");
        printf("O número 1 é o menor.\n");
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
