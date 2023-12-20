#include "fila.h"
#include <stdio.h>

int main() {
    Fila filaDecolagem;
    inicializarFila(&filaDecolagem);

    while (1) {
        printf("\n========== Controle de Decolagem ==========\n");
        printf("1. Listar número de aviões na fila de decolagem\n");
        printf("2. Autorizar decolagem do primeiro avião da fila\n");
        printf("3. Adicionar avião à fila de espera\n");
        printf("4. Listar todos os aviões na fila de espera\n");
        printf("5. Listar características do primeiro avião da fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Número de aviões na fila de decolagem: %d\n", tamanhoFila(&filaDecolagem));
                break;
            case 2:
                if (tamanhoFila(&filaDecolagem) > 0) {
                    Aviao aviaoDecolagem = desenfileirar(&filaDecolagem);
                    printf("Autorizando decolagem do avião %s, Identificador: %d\n", aviaoDecolagem.nome, aviaoDecolagem.identificador);
                } else {
                    printf("Não há aviões na fila de decolagem.\n");
                }
                break;
            case 3:
                {
                    Aviao novoAviao;
                    printf("Digite o nome do avião: ");
                    scanf("%s", novoAviao.nome);
                    printf("Digite o identificador do avião: ");
                    scanf("%d", &novoAviao.identificador);
                    enfileirar(&filaDecolagem, novoAviao);
                    printf("Avião adicionado à fila de espera.\n");
                }
                break;
            case 4:
                imprimirFila(&filaDecolagem);
                break;
            case 5:
                {
                    Aviao aviaoFrente = frenteFila(&filaDecolagem);
                    if (aviaoFrente.identificador != -1) {
                        printf("Características do primeiro avião na fila:\n");
                        printf("Nome: %s, Identificador: %d\n", aviaoFrente.nome, aviaoFrente.identificador);
                    } else {
                        printf("Não há aviões na fila de decolagem.\n");
                    }
                }
                break;
            case 0:
                printf("Encerrando o programa. Até mais!\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}
