#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 1)Desenvolver um programa que pe�a ao usu�rio informar dois n�meros. */
/* O programa dever� informar o seguinte: */

/* a) Qual � o maior n�mero? */
/* b) Qual � o menor n�mero? */
/* c) Os n�meros s�o iguais? */



int main() {
    int numero1, numero2;
    setlocale(LC_ALL, "Portuguese");

    // Entrada de dados
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Estrutura condicional
    if (numero1 > numero2) {
        printf("O n�mero 1 � o maior.\n");
        printf("O n�mero 2 � o menor.\n");
    } else if (numero1 < numero2) {
        printf("O n�mero 2 � o maior.\n");
        printf("O n�mero 1 � o menor.\n");
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}
