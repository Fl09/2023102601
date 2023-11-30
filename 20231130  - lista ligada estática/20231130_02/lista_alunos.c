#include "lista_alunos.h"
#include <stdio.h>

void inicializarLista(ListaAlunos *lista){
  lista ->quantidade =0;
}

void liberarLista(ListaAlunos *lista){
  lista->quantidade=0; //sem necessidade de liberar a memória
}

int quantidadeElementos(ListaAlunos lista){
  return lista.quantidade;
}

int listaCheia(ListaAlunos lista){
  return lista.quantidade == MAX_ALUNOS;
}

int listaVazia(ListaAlunos lista){
  return lista.quantidade == 0;
}

void exibirElementos(ListaAlunos lista){
  printf("lista de alunos:\n ");
  for(int i = 0; i< lista.quantidade; i++){
    printf("Matricula: %d, Nome: %s, Idade: %d\n", lista.alunos[i].matricula, lista.alunos[i].nome, lista.alunos[i].idade);
  }
}

void inserirElementos(ListaAlunos *lista, Aluno aluno){
  if(listaCheia(*lista)){
    printf("erro: lista cheia. \n");
    return;
  }

  int posicao = 0;
  while (posicao <lista-> quantidade && aluno.matricula > lista->alunos[posicao].matricula){
     posicao++;
  }

  for(int i = lista->quantidade; i>posicao; i--){
    lista ->alunos[i] = lista->alunos[i-1];
  }

  lista->alunos[posicao] = aluno;
  lista->quantidade++;
}

void excluirElemento(ListaAlunos *lista, int matricula){
  int posicao = 0;

  while (posicao < lista-> quantidade && matricula != lista->alunos[posicao].matricula){
    posicao++;
  }
  if(posicao == lista->quantidade){
    printf("erro: matricula não encontrada. \n");
    return;
  }

  lista ->quantidade--;
}


void alterarMatricula(ListaAlunos *lista, int matricula, int novaMatricula){
  int posicao = 0;

  while(posicao <lista ->quantidade && matricula != lista->alunos[posicao].matricula){
    posicao++;
  }

  if(posicao == lista->quantidade){
    printf("Erro: matricula não encontrada. \n");
    return;
  }
  
  lista->alunos[posicao].matricula = novaMatricula;
}
