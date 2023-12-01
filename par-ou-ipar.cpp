#include <stdio.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL,"Portuguese");

    // Entrada de dados
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Estrutura condicional
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}
