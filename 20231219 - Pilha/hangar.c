#include <stdio.h>
#include <stdlib.h>
#include "hangar.h"

void inicializarHangar(Pilha* hangar) {
    hangar->topo = NULL;
}

void adicionarAviao(Pilha* hangar, Aviao aviao) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória para o avião.\n");
        exit(EXIT_FAILURE);
    }

    novoNo->aviao = aviao;
    novoNo->proximo = hangar->topo;
    hangar->topo = novoNo;

    printf("Avião adicionado com sucesso!\n");
}

void listarAvioes(Pilha hangar) {
    No* atual = hangar.topo;

    printf("Aviões no hangar:\n");
    while (atual != NULL) {
        printf("ID: %d, Nome: %s\n", atual->aviao.id, atual->aviao.nome);
        atual = atual->proximo;
    }
}

void listarPrimeiroAviao(Pilha hangar) {
    if (hangar.topo != NULL) {
        printf("Primeiro avião no hangar:\n");
        printf("ID: %d, Nome: %s\n", hangar.topo->aviao.id, hangar.topo->aviao.nome);
    } else {
        printf("Nenhum avião no hangar.\n");
    }
}

void tirarAviao(Pilha* hangar) {
    if (hangar->topo != NULL) {
        No* temp = hangar->topo;
        hangar->topo = temp->proximo;
        free(temp);
        printf("Avião removido com sucesso!\n");
    } else {
        printf("Nenhum avião no hangar.\n");
    }
}

void tirarAviaoPorPosicao(Pilha* hangar, int posicao) {
    if (posicao <= 0 || posicao > contarAvioes(*hangar)) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = 1; i < posicao; i++) {
        tirarAviao(hangar);
    }

    printf("Avião na posição %d removido com sucesso!\n", posicao);
}

int contarAvioes(Pilha hangar) {
    int contador = 0;
    No* atual = hangar.topo;

    while (atual != NULL) {
        contador++;
        atual = atual->proximo;
    }

    return contador;
}
