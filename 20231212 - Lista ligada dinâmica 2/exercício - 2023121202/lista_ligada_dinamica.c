#include <stdio.h>
#include <stdlib.h>
#include "lista_ligada_dinamica.h"

void inicializarLista(LISTA_LIGADA_DINAMICA* lista){
  lista->cabeca = NULL;
}

void inserirElemento(LISTA_LIGADA_DINAMICA* lista, int elemento){
  No* novoNo = (No* )malloc(sizeof(No));
  novoNo->dado = elementos;
  novoNO->proximo = lista->cabeca;
  lista->cabeca = novoNo;
}

void percorrerLista(LISTA_LIGADA_DINAMICA lista){
  No* atual = lista.cabec;
  while (atula != NULL){
    printf("%d ", atual->dado);
    atual = atual->proximo;
  }
  printf("\n");
}

LISTA_LIGADA_DINAMICA construirListaL1A(LISTA_LIGADA_DINAMICA lista){
  LISTA_LIGADA_DINAMICA listaL1A;
  inicializarLista(&listaL1A);

  No* atual = lista.cabeca;

  while(atual->proximo != NULL){
    inserirElemento(&listaL1A, atual->proximo->dado);
    atual = atual->proximo;
  }

  inserirElemento(&listaL1A, lista.cabeca->dado);// adiciona o primeiro elemento no final

  return listaL1A;
  
}

LISTA_LIGADA_DINAMICA construirListaL1B(LISTA_LIGADA_DINAMICA lista){
  LISTA_LIGADA_DINAMICA listaL1B;
  inicializarLista(&listaL1B);

  No* atual = lista.cabeca;

  while(atual->proximo != NULL){
    inserirElemento(&listaL1B, atual->proximo->dado);
    atual = atual->proximo;
  }

  inserirElemento(&listaL1B, lista.cabeca->dado);// adiciona o primeiro elemento no final

  return listaL1B;
}
