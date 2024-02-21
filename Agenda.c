#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char telefone[20];
};

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int num_contatos = 0;
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Sair\n");
        printf("Escolha a opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                if (num_contatos < MAX_CONTATOS) {
                    printf("Digite o nome do contato: ");
                    scanf("%s", agenda[num_contatos].nome);
                    printf("Digite o telefone do contato: ");
                    scanf("%s", agenda[num_contatos].telefone);
                    num_contatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("A agenda está cheia!\n");
                }
                break;
            case '2':
                printf("Lista de Contatos:\n");
                for (int i = 0; i < num_contatos; i++) {
                    printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
                }
                break;
            case '3':
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != '3');

    return 0;
}
