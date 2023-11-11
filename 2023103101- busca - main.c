#include <stdio.h>
#include <stdlib.h>
#include "Busca.h"

int main(){
  int tamanhoLista;
  printf("digite o tamanho da LISTA: ");
  scanf ("%d", &tamnhoLista);
  LISTA lista1 = criarLista(tamanhoLista);

  for (int i = 0; i < tamanhoLista; i++){
    lista1.vetor[i]= rand () % 100;
  }

  imprimirLista(lista1);

  int elementoBusca;
  printf ("digite um elemento para buscar na lista: ");
  scanf ("%d", &elementoBusca);

  int posicaoEncontrada = buscaSequencial(lista1, elementoBusca);
  if (posicaoEncontrada != -1){
    printf ("Elemento encontrado na posicao %d.\n", posicaoEncontrada);
  } else {
    printf("Elemento nao encontrado na LISTA.\n");
  }
}

LISTA lista 2 = criarLista(30);

 for (int i = 0; i < 30; i++) {
        lista2.vetor[i] = i * 2; // Números pares ordenados
    }

    imprimirLista(lista2);

    printf("Digite um elemento para buscar na segunda LISTA: ");
    scanf("%d", &elementoBusca);
    int compSeq = 0;
    int posicaoSeq = buscaSequencial(lista2, elementoBusca);
    if (posicaoSeq != -1) {
        printf("Elemento encontrado na posicao %d (Busca Sequencial).\n", posicaoSeq);
    } else {
        printf("Elemento nao encontrado na segunda LISTA (Busca Sequencial).\n");
    }

    int compSeqOrd = 0;
    int posicaoSeqOrd = buscaSequencialOrdenada(lista2, elementoBusca, &compSeqOrd);
    if (posicaoSeqOrd != -1) {
        printf("Elemento encontrado na posicao %d (Busca Sequencial Ordenada).\n", posicaoSeqOrd);
    } else {
        printf("Elemento nao encontrado na segunda LISTA (Busca Sequencial Ordenada).\n");
    }

    int compBin
