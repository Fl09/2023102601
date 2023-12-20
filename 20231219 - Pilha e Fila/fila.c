#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarFila(Fila* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
}

int tamanhoFila(Fila* fila) {
    int tamanho = 0;
    No* atual = fila->frente;

    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }

    return tamanho;
}

void enfileirar(Fila* fila, Aviao aviao) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aviao = aviao;
    novoNo->proximo = NULL;

    if (fila->tras == NULL) {
        fila->frente = novoNo;
        fila->tras = novoNo;
    } else {
        fila->tras->proximo = novoNo;
        fila->tras = novoNo;
    }
}

Aviao desenfileirar(Fila* fila) {
    if (fila->frente == NULL) {
        Aviao aviaoVazio = {"", -1};
        return aviaoVazio;
    }

    No* temp = fila->frente;
    Aviao aviaoDesenfileirado = temp->aviao;

    fila->frente = fila->frente->proximo;

    if (fila->frente == NULL) {
        fila->tras = NULL;
    }

    free(temp);
    return aviaoDesenfileirado;
}

Aviao frenteFila(Fila* fila) {
    if (fila->frente == NULL) {
        Aviao aviaoVazio = {"", -1};
        return aviaoVazio;
    }

    return fila->frente->aviao;
}

void imprimirFila(Fila* fila) {
    No* atual = fila->frente;

    printf("Aviões na fila de espera:\n");

    while (atual != NULL) {
        printf("Nome: %s, Identificador: %d\n", atual->aviao.nome, atual->aviao.identificador);
        atual = atual->proximo;
    }
}
