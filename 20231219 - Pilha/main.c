#include <stdio.h>
#include "hangar.h"

int main() {
    Pilha hangar;
    inicializarHangar(&hangar);

    int opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Listar número de aviões aguardando no hangar\n");
        printf("2. Tirar um avião do hangar\n");
        printf("3. Adicionar um avião no hangar\n");
        printf("4. Listar todos os aviões no hangar\n");
        printf("5. Listar características do primeiro avião no hangar\n");
        printf("6. Tirar um avião do hangar pela posição\n");
        printf("0. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Número de aviões aguardando no hangar: %d\n", contarAvioes(hangar));
                break;
            case 2:
                tirarAviao(&hangar);
                break;
            case 3: {
                Aviao novoAviao;
                printf("Digite o ID do avião: ");
                scanf("%d", &novoAviao.id);
                printf("Digite o nome do avião: ");
                scanf("%s", novoAviao.nome);
                adicionarAviao(&hangar, novoAviao);
                break;
            }
            case 4:
                listarAvioes(hangar);
                break;
            case 5:
                listarPrimeiroAviao(hangar);
                break;
            case 6: {
                int posicao;
                printf("Digite a posição do avião a ser removido: ");
                scanf("%d", &posicao);
                tirarAviaoPorPosicao(&hangar, posicao);
                break;
            }
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
