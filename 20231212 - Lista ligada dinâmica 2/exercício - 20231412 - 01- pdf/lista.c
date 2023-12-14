#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criarLista() {
  Lista* lista = (Lista*)malloc(sizeof(Lista));
  if(lista == NULL){
    perror("Erro ao acolocar a memória para a lista" );
    exit(EXIT_FAILURE);
  }
  lista ->inicio= NULL;
  lista->fim = NULL;
  return lista;
}

void inserirNoInicio(Lista* lista, int valor) {
  Node* novoNo =(Node*)malloc(sizeof(Node));
  if(novoNo == NULL) {
    perror("Erro ao acolocar a memória para o nó");
    exit(EXIT_FAILURE);
  }
  novoNo ->valor = valor;
  novoNo->proximo = lista->inicio
  novoNo-> anterior = NULL;

  if(lista->inicio != NULL) {
    lista->inicio-> anterior = novoNo;
  } else{
    // se a lista estava vazia, o novo nó também será o fim da lista
    lista->fim = novoNo;
  }

  lista->inicio =novoNo;
}

void imprimirLista(Lista* lista) {
  Node* atual = lista->inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

void liberarLista(Lista* lista) {
  Node* atual = lista->inicio;
  while(atual !=NULL) {
    free(atual);
    atual = proximo;
  }
  free(atual);
}
