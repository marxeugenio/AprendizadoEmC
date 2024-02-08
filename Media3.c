#include <stdio.h>

// Função para calcular a média das notas
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {
    float nota1, nota2, nota3;

    // Solicita ao usuário para inserir as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das notas usando a função calcularMedia
    float media = calcularMedia(nota1, nota2, nota3);

    // Exibe a média das notas
    printf("A media das notas e: %.2f\n", media);

    return 0;
}
