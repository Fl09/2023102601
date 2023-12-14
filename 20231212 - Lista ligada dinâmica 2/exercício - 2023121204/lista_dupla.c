#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_dupla.h"

void inicializarListaD(LISTA_DUPLA* lista) {
    lista->cabeca = NULL;
}

void inserirAlunoD(LISTA_DUPLA* lista, const char* nome) {
    NoD* novoNo = (NoD*)malloc(sizeof(NoD));
    strcpy(novoNo->nome, nome);
    novoNo->proximo = NULL;
    novoNo->anterior = NULL;

    if (lista->cabeca == NULL) {
        lista->cabeca = novoNo;
    } else {
        novoNo->proximo = lista->cabeca;
        lista->cabeca->anterior = novoNo;
        lista->cabeca = novoNo;
    }
}

void percorrerListaD(LISTA_DUPLA lista) {
    if (lista.cabeca == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    NoD* atual = lista.cabeca;
    while (atual != NULL) {
        printf("%s ", atual->nome);
        atual = atual->proximo;
    }

    printf("\n");
}
