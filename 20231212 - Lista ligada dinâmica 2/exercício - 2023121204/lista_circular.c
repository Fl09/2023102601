#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_circular.h"

void inicializarListaC (LISTA_CIRCULAR* lista) {
  lista->cabeca = NULL;
}

void inserirAlunoC (LISTA_CIRCULAR* lista,const char* nome) {
   NoC* novoNo = (NoC*)malloc(sizeof(NoC));
    strcpy(novoNo->nome, nome);
    novoNo->proximo = NULL;

    if (lista->cabeca == NULL) {
        lista->cabeca = novoNo;
        novoNo->proximo = novoNo;
    } else {
        novoNo->proximo = lista->cabeca->proximo;
        lista->cabeca->proximo = novoNo;
        lista->cabeca = novoNo;
    }
}

void percorrerLista(LISTA_CIRCULAR lista) {
  if (lista.cabeca == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    NoC* atual = lista.cabeca;
    do {
        printf("%s ", atual->nome);
        atual = atual->proximo;
    } while (atual != lista.cabeca);

    printf("\n");
}
