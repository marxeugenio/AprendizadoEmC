#include <stdio.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaFahrenheit);

    return 0;
}


// # include <stdio.h>  Está linha é uma diretiva de pré processador que inclui a biblioteca de entrada e saida padrão stdio.h é necessario para funções como printf e scanf

// int main () Define uma função principal do programa. Todo programa em C deve ter uma função main que é o ponto de entrada

// float temperaturaCelsius, temperaturaFahrenheit Declaração de duas variaveis de ponto flutuante float. Elas serão usadas para armazenara temperatura em Celsius e Fahrenheit

// scanf("%f" &temperaturaCelsius); Usa a função scanf para ler o numero de ponto flutuante digitado pelo usuario e armazenalo na variavel, o %f indica que um numero de ponto flutuante sera inserido

// temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32; Calcula a temperatura em Fahrenheit a partir da temperatura em Celsius usando a  formula de conversão 

// reutrn 0; Finaliza a função main e retorna 0 ao sistema operacional indicando que o programa foi executado com sucesso
