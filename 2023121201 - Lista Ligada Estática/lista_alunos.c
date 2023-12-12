#ifndef LISTA_ALUNOS_H
#define LISTA_ALUNOS_H

#include "aluno.h"

typedef struct Node{
    Aluno aluno;
    struct Node* next;
} Node;

typedef struct{
    Node* heard;
} ListaAlunos;

void inicializarLista(ListaAlunos* lista);
void reiciarLista(ListaAlunos* lista);
void quantidadeElementos(ListaAlunos lista);
void listaCheia(ListaAlunos lista);
void listaVazia(ListaAlunos lista);
void exibirLista(ListaAlunos lista);
void inserirElementoOrdenado(ListaAlunos* lista, Aluno aluno);
void excluirElemento(ListaAlunos* lista, int matricula);

#endif
