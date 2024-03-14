#include <stdio.h>

// Declaração da função para calcular o fatorial
int fatorial(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: O numero deve ser positivo.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d eh: %d\n", numero, resultado);
    }

    return 0;
}

// Definição da função fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
