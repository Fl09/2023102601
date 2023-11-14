#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

LISTA criarLista(int quantidade) {
  LISTA lista;
  lista.elementos = (int*)malloc(sizeof(int)* quantidade);
  lista.quantidade = quantidade;
  return lista;
}

void liberarLista (LISTA* lista){
  free (lista ->elementos);
  lista->quantidade = 0;
}

void inserirElemento (LISTA* lista, int elemento){
  lista ->elementos[lista->quantidade++] = elemento;
}

void inserirElementoOrdenado(LISTA* lista, int elemento){
  int i = lista->quantidade -1;
  while (i >= 0 && lista->elementos[i] > elemento){
    lista->elementos[i+1] = lista ->elementos[i];
    i--;
  } 
  lista->elementos[i+1] = elementos;
  lista->quatidade++;
  
}

void imprimirListaInterativo(LISTA lista){
  for (int i = 0; i < lista.quantidade; i++){
    printf ("%d ", lista.elementos[i]);
  }
  printf ("\n");
}

int buscaBinariaRecursiva (LISTA lista, int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (lista.elementos[meio] == elemento) {
            return meio;
        }
        if (lista.elementos[meio] > elemento) {
            return buscaBinariaRecursiva(lista, elemento, inicio, meio - 1);
        }
        return buscaBinariaRecursiva(lista, elemento, meio + 1, fim);
    }
    return -1;
}

void imprimirListaRecursivo(LISTA lista, int indice){
  if(indice < lista.quantidade){
    printf("%d ", lista.elementos[indice]);
    imprimirListaRecursivo(lista, indice + 1);
  }else {
      printf("\n");
  }
}

int buscarMaiorRecursivo(LISTA lista, int indice){
  if (indice == lista.quantidade - 1){
    return lista.elementos[indice];
  }
  int proximo = buscarMaiorRecusivo (lista, indice + 1);
  return (lista.elementos[indice] > proximo) ? lista.elementos[indice] : proximo;

}

int buscarMenorRecursivo (LISTA lista, int indice){
  if (indice == lista.quantidade - 1){
    return lista.elementos[indice];
  }
  int proximo = buscarMenorRecursivo(lista, indice + 1);
    return (lista.elementos[indice] < proximo) ? lista.elementos[indice] : proximo;
}

int somaRecursiva(LISTA lista, int indice){
  if (indice == lista.quantidade){
    return 0;
  }
  return lista.elementos[indice] + somaRecursiva(lista, indice +1);
}

int produtoRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade) {
        return 1;
    }
    return lista.elementos[indice] * produtoRecursivo(lista, indice + 1);
}
