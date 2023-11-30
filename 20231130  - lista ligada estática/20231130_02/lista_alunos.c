#include "lista_alunos.h"
#include <stdio.h>

void inicializarLista(ListaAlunos *lista){
  lista ->quantidade =0;
}
void liberarLista(ListaAlunos *lista){
  lista->quantidade=0; //sem necessidade de liberar a memória
}
int quantidadeElementos(ListaAlunos lista){
  
}
int listaCheia(ListaAlunos lista);
int listaVazia(ListaAlunos lista);
void exibirElementos(ListaAlunos lista);
void inserirElementos(ListaAlunos *lista, Aluno aluno);
void excluirElemento(ListaAlunos *lista, int matricula);
void alterarMatricula(ListaAlunos *lista, int matricula, int novaMatricula);
