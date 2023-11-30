#include "lista_ligada_estatica.h"

void inicializarLista(ListaLigadaEstatica *lista){
  lista ->tamanho = 0;
}

void exibirLista(ListaLigadaEstatica lista){
  for(int i = 0; i < lista.tamanho; i++){
    printf("%d ", lista.dados[i]);
  }
  printf("\n");
}

void copiarLista(ListaLigadaEstatica *destino, ListaLigadaEstatica origem){
  destino->tamanho = origem.tamanho;
  for(int i = 0; i <origem.tamanho; i++){
    destino->dados[i] = origem.dados[i];
  }
}

void concatenarListas(ListaLigadaEstatica *resultado, ListaLigadaEstatica lista1, ListaLigadaEstatica lista2){
  inicializarLista(resultado);

  for(int i = 0; i < lista1.tamanho; i++){
    resultado->dados[resultado->tamanho++] = lista1.dados[i];
  }

  for(int i = 0; i < lista2.tamanho; i++){
    resultado->dados[resultado->tamanho++] = lista2.dados[i];
  }
}

void intercalarListas(ListaLigadaEstatica *resultado, ListaLigadaEstatica lista1, ListaLigadaEstatica lista2){
   inicializarLista(resultado);

   int i = 0, j = 0;
   while (i < lista1.tamanho && j < lista2.tamanho) {
        resultado->dados[resultado->tamanho++] = lista1.dados[i++];
        resultado->dados[resultado->tamanho++] = lista2.dados[j++];
    }

    while (i < lista1.tamanho) {
        resultado->dados[resultado->tamanho++] = lista1.dados[i++];
    }

    while (j < lista2.tamanho) {
        resultado->dados[resultado->tamanho++] = lista2.dados[j++];
    }
}
