#include "lista_alunos.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(ListaAlunos* lista){
  lista->head = NULL;
}

void reiciarLista(ListaAlunos* lista){
  Node* current = lista->head;
  while (current!= NULL){
    Node* next = current->next;
    free(current);
    current = next;
  }
  lista->head = NULL;
}

int quantidadeElementos(ListaAlunos lista){
  int count = 0;
    Node* current = lista.head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int listaCheia(ListaAlunos lista){
  return 0; // não tem tamanho fixo
}

int listaVazia(ListaAlunos lista){
  return lista.head == NULL;
}

void exibirLista(ListaAlunos lista){
   Node* current = lista.head;
    while (current != NULL) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", current->aluno.matricula, current->aluno.nome, current->aluno.idade);
        current = current->next;
    }
}

void inserirElementoOrdenado(ListaAlunos* lista, Aluno aluno){
  Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->aluno = aluno;
    new_node->next = NULL;

    Node* current = lista->head;
    Node* previous = NULL;

    while (current != NULL && current->aluno.matricula < aluno.matricula) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        new_node->next = lista->head;
        lista->head = new_node;
    } else {
        previous->next = new_node;
        new_node->next = current;
    }
}

void excluirElemento(ListaAlunos* lista, int matricula){
  Node* current = lista->head;
    Node* previous = NULL;

    while (current != NULL && current->aluno.matricula != matricula) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Matricula %d nao encontrada na lista.\n", matricula);
        return;
    }

    if (previous == NULL) {
        lista->head = current->next;
    } else {
        previous->next = current->next;
    }
      free (current);
}
