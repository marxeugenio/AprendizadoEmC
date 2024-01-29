#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1;  // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operação inválida!\n");
            return 1;  // Encerra o programa com código de erro
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
