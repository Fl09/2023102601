#include <stdio.h>
#include <stdlib.h>
#include "lista_ligada_dinamica.h"

void inicializarLista(LISTA_LIGADA_DINAMICA* lista) {
  lista->cabeca = NULL;
}

void inserirElemeto(LISTA_LIGADA_DINAMICA* lista, int elemento) {
  No* novoNo = (No*)malloc(sizeof(No));
  novoNo->dado = elemento;
  novoNo->proximo = lista->cabeca;
  lista->cabeca = novoNO;
}

void percorrerLista(LISTA_LIGADA_DINAMICA lista){
  No* atual = lista.cabeca;
  while (atual != NULL) {
    printf("%d ", atual->dado);
    atual = atual->proximo;
  }
  printf("\n");
}

LISTA_LIGADA_DINAMICA copiarLista(LISTA_LIGADA_DINAMICA lista)  {
  LISTA_LIGADA_DINAMICA novaLista;
  inicializarLista(&novaLista);

  No* atual = lista.cabeca;

  while (atual != NULL) {
    inserirElemento(&novaLista, atual->dado);
    atual = atual ->proximo;
  }
  
  return novaLista;
}

LISTA_LIGADA_DINAMICA concatenarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2) {
  LISTA_LIGADA_DINAMICA novaLista;
  inicializarLista(&novaLista);

  No* atual = lista.cabeca;

  while (atual != NULL) {
    inserirElemento(&novaLista, atual->dado);
    atual = atual ->proximo;
  }

  //copiar elementos da lista2 paa a nova lista
  atual = lista2.cabeca;
  while (atual != NULL) {
    inserirElemento(&novaLista, atual->dado);
    atual = atual->proximo;
  }

  return novaLista;
}

LISTA_LIGADA_DINAMICA intercalarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2) {
  LISTA_LIGADA_DINAMICA novaLista;
  inicializarLista(&novaLista);

  No* atual = lista.cabeca;
  No* atual2 = lista.cabeca;

  while (atual1 != NULL || atual2 != NULL) {
    if (atual1 != NULL) {
      inserirElemento(&novaLista, atual1->dado);
      atual1 = atual1->proximo;
    }

    if (atual2 != NULL) {
      inserirElemenento(&novaLista, atual2);
      atual2 = atual2->proximo
    }
  }

  return novaLista;
}
