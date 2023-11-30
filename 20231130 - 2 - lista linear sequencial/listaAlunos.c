#include "listaAlunos.h"
#include <stdio.h>

void inicializarLista(ListaAlunos *lista){
  lista-> quantidade = 0;
}

void liberarLista(ListaAlunos *lista){
  lista-> quantidade = 0;
}

int tamanhoLista(const ListaAlunos *lista){
  return lista ->quantidade;
}

int listaCheia(const ListaAlunos *lista){
  return lista->quantidade == MAX_ALUNOS;
}

int listaVazia(const ListaAlunos *lista){
  return lista ->quantidade == 0;
}

void exibirLista (const ListaAlunos *lista){
  printf("Lista de alunos: ");
  for (int i = 0; i <lista->quantidade; ++i){
    printf("%d ", lista ->elementos[i]);
  }
  printf("\n");
}

void inserirElemento(ListaAlunos *lista, int matricula){
  if(listaCheia(lista)){
    printf("erro: lista cheia. \n");
    return;
  }

  int i = lista->quantidade -1;
while(i >= 0 && lista->elementos[i]> matricula){
  lista->elementos[i+1] = lista ->elementos[i]
    i--;
}

lista ->elementos[i +1] = matricula;
lista ->quantidade++;
  
}

void excluirElemento (ListaAlunos *lista, int matricula){
  int i = 0;
  while (i < lista->quantidade && lista->elementos[i] != matricula){
    i++;
  }

  if (i == lista->quantidade){
    printf("matricula %d não encontrada na lista. \n", matricula);
    return;
  }

  for (int j =i; j < lista->quantidade -1; ++j){
    lista->elementos[j] = lista->elementos[j+1];
  }

  lista->quantidade--;
}

void alterarMatricula(ListaAlunos *lista, int matriculaAtual, int novaMatricula){
  excluirElemento(lista, matriculaAtual);
  inserirElemento(lista, novamatricula);
}

