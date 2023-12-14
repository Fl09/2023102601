#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_circular_dupla.h"

void inicializarListaCD (LISTA_CIRCULAR_DUPLA* lista, const char* nome) {
  NoCD* novoNo = (NoCD*)malloc(sizeof(NoCD));
    strcpy(novoNo->nome, nome);
    novoNo->proximo = NULL;
    novoNo->anterior = NULL;

  if(lista->cabeca == NULL) {
    lista->cabeca = novoNo;
    novoNo->proximo = novoNo;
    novoNo->anterior = novoNo;
  } else {
    novoNo->proximo = lista->cabeca;
    novoNo->anterior = lista->cabeca->anterior;
    lista->cabeca->anterior->proximo = novoNo;
    lista->cabeca->anterior = novoNo;
  }
}

void percorrerListaCD(LISTA_CIRCULAR_DUPLA lista) {
  if(lista.cabeca == NULL) {
    printf ("Lista vazia. \n");
    return;
  }

  NoCD* atual = lista.cabeca;

  do {
    printf("%s ", atual->nome);
    atual = atual->proximo;
  } while (atual != lista.cabeca);

  printf("\n");
}
