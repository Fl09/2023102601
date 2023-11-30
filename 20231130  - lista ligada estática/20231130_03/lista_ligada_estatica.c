#include "lista_ligada_estatica.h"

void inicializarLista(ListaLigadaEstatica *lista){
  lista ->tamanho - 0;
}

void adicionarElemento(ListaLigadaEstatica *lista, int elemento){
  if (lista->tamanho < MAX_ELEMENTOS){
    lista->elementos[lista->tamanho] = elementos;
    lista->tamanho++;
  }else{
    // lista cheia, tratamento de erro ou ajuste
  }
}

void petcorrerLista(ListaLigadaEstatica *lista){
  for(int i = 0; i<lista->tamanho; i++){
    printf("%d ", lista->elementos[i]);
  }
  printf("\n");
}

void construirLista1(ListaLigadaEstatica *lista, ListaLigadaEstatica *listaL1){
  inicializarLista (listaL1);

  for (int i = 1; i<lista->tamanho; i++){
    adicionarElemento(listaL1, lista->elementos[i]);
  }
  adicionarElemento(listaL1, lista->elementos[0]);
  
}

void construirLista2(ListaLigadaEstatica *lista, ListaLigadaEstatica *listaL2){
  inicializarLista(listaL2);

  for(int i = lista->tamanho -1; i>= 0; i--){
    adicionarElemento(listaL2, lista ->elementos[i]);
  }
}
