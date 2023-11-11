#include <stdio.h>
#include <stdlib.h>
#include "Busca.h"

LISTA criarLista(int tamanho){
  LISTA novaLista;
  novaLista.vetor = (int *)malloc (tamanho* sizeof(int));
  novaLista.tamanho = tamanho;
  return novaLista;
}

void liberarLista(LISTA lista){
  free (lista -> vetor);
  lista->tamanho = 0;
}

void inserirElemento(LISTA *lista, int elemento, int posicao){
  if (posicao >= 0 && posicao <lista ->tamanho){
    lista->vetor[posicao] = elemento;
  } else {
    printf("Posicao invalida.\n");
  }
}

void imprimirLista(LISTA lista){
  printf ("Elementos da LISTA: ");
  for (int i = 0; i < lista.tamanho; i++){
    if (lista.vetor[i] == elemento){
      return i; // elemento encontrado, retorna a posição
    }
  }
  return -1; // elemento não encontrado
}

int buscaSequencialOrdenada (LISTA lista, int elemento, int *comparacoes){
  for (int i = 0; i < lista.tamanho; i ++){
    (*comparacoes)++;
    if(lista.vetor[i] == elementos{
      return i; // elememto encontrado, retorna a posição
    } else if (lista.vetor[i] > elemento){
       return -1; // elemento não encontrado (a lista está ordenada)
    }
  }
return -1; //elemento não encontrado
}

int buscaBinaria (LISTA lista, int elemento, int *comparacoes){
  int inicio = 0;
  int fim = lista.tamanho -1;

  while (inicio<= fim){
    (*comparacoes)++;
    int meio = (inicio+ fim) / 2;

    if (lista.vetor[meio] == elemento){
      return meio; // elemento encontrado, retorna a posição
    } else if (lista.vetor[meio] < elemento){
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }

  return -1;
}

int buscaMaior (LISTA lista){
  int maior = lista.vetor[0];
  for(int i = 1; i < lista.tamanho; i++){
    if (lista.vetor[i] > maior) {
      maior = lista.vetor[i];
    }
  }
  return maior;
}

int buscaMenor (LISTA lista){
  int menor = lista.vetor[0];
  for(int i = 1; i < lista.tamanho; i++){
    if (lista.vetor[i] < menor) {
      menor = lista.vetor[i];
    }
  }
  return menor;
}

int somarElementos (LISTA lista){
  int soma = 0;
  for (int i = 0; i < lista.tamanho; i++){
    produto *= lista.vetor[i];
  }
  return produto;
}

int buscaBinariaRecursiva (LISTA lista, int elemento, int inicio, int fim, int *comparacoes){
  if (inicio > fim) {
    return -1; // elemento encontrado, retorna a posicao
  }

  (*comparacoes)++;
  int meio =(inicio + fim) /2;

  if (lista.vetor[meio] == elemento{
    return meio;
  } else if (lista.vetor[meio] < elemento){
    return buscaBinariaRecursiva(lista, elemento, meio + 1, fim, comparacoes); 
  } else {
    return buscaBinariaRecursiva(lista, elemento, meio - 1, fim, comparacoes); 
  }
}
