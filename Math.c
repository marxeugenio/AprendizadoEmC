#include <stdio.h>

int main() {
    // Declaração de variáveis
    int num1, num2, soma;

    // Solicita input do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Realiza a soma
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}
