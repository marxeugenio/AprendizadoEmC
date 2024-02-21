#include <stdio.h>
#include <stdbool.h>

#define MAX_TAREFAS 100

struct Tarefa {
    char descricao[100];
    bool concluida;
};

int main() {
    struct Tarefa lista_tarefas[MAX_TAREFAS];
    int num_tarefas = 0;
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Marcar Tarefa como Concluída\n");
        printf("3. Listar Tarefas\n");
        printf("4. Sair\n");
        printf("Escolha a opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                if (num_tarefas < MAX_TAREFAS) {
                    printf("Digite a descrição da tarefa: ");
                    scanf(" %[^\n]", lista_tarefas[num_tarefas].descricao);
                    lista_tarefas[num_tarefas].concluida = false;
                    num_tarefas++;
                    printf("Tarefa adicionada com sucesso!\n");
                } else {
                    printf("A lista de tarefas está cheia!\n");
                }
                break;
            case '2':
                printf("Digite o número da tarefa a ser marcada como concluída (1 a %d): ", num_tarefas);
                int num_tarefa;
                scanf("%d", &num_tarefa);
                if (num_tarefa >= 1 && num_tarefa <= num_tarefas) {
                    lista_tarefas[num_tarefa - 1].concluida = true;
                    printf("Tarefa marcada como concluída!\n");
                } else {
                    printf("Número de tarefa inválido!\n");
                }
                break;
            case '3':
                printf("Lista de Tarefas:\n");
                for (int i = 0; i < num_tarefas; i++) {
                    printf("%d. [%c] %s\n", i + 1, lista_tarefas[i].concluida ? 'x' : ' ', lista_tarefas[i].descricao);
                }
                break;
            case '4':
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != '4');

    return 0;
}
