#ifndef LISTA_ALUNOS_H
#define LISTA_ALUNOS_H

#define MAX_ALUNOS 100

typedef struct{
int matricula;
char nome[50];
int idade;
} Aluno;

typedef struct{
    Aluno alunos[MAX_ALUNOS];
    int quantidade;
} ListaAlunos;

void inicializarLista(ListaAlunos *lista);
void liberarLista(ListaAlunos *lista);
int quantidadeElementos(ListaAlunos lista);
int listaCheia(ListaAlunos lista);
int listaVazia(ListaAlunos lista);
void exibirElementos(ListaAlunos lista);
void inserirElementos(ListaAlunos *lista, Aluno aluno);
void excluirElemento(ListaAlunos *lista, int matricula);
void alterarMatricula(ListaAlunos *lista, int matricula, int novaMatricula);

#endif
