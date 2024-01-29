#include <stdio.h>

// include <stdio.h> Esta linha é uma diretiva de pré-processador que inclui a biblioteca de entrada e saida padrão  (stdio.h). Essa biblioteca é necessária para funções como printf e scanf

int main() {

// int main() { Define a funlção principal do programa. Todo programa em C deve ter uma função main, que é o ponto de entrada

    int numero;

//  int numero: Declaração de uma variavel inteira chamada numero. Esta variavel será utilizada para armazernar o número fornecido pelo usuario 

    printf("Digite um número inteiro: ");
    
// printf("Digite um número inteiro: "), usa a função printf para exibir uma menssagem na tela, pedindo ao usuario que digite um numero inteiro

    scanf("%d", &numero);

// scanf("%d", &numero); Usa a função scanf para ler um número inteiro digitado pelo usuario e amarzena lo na variavel numero, o %d indica que um inteiro sera inserido, e o &numero passa o endereço de memória da variável numero para armazenar o valor inserido 

    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }

    return 0;
}

// if (numero % 2 == 0) { inicia um estrutura condicional if. A condição numero % 2 == 0 verifica se o numero informado é divisivel por 2 e se for ele é par se não impar, em relação ao resto do codigo é só questão de estrutura.
