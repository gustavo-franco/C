#include <stdio.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL,"Portuguese");

    // Entrada de dados
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Estrutura condicional
    if (numero % 2 == 0) {
        printf("O n�mero � par.\n");
    } else {
        printf("O n�mero � �mpar.\n");
    }

    return 0;
}
