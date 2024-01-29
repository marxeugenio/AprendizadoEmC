#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é um número positivo.\n", numero);
    } else if (numero < 0) {
        printf("%d é um número negativo.\n", numero);
    } else {
        printf("%d é zero.\n", numero);
    }

    return 0;
}
