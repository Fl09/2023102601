#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 100

typedef struct{
int codigo;
char nome [50];
int idade;
int num_filhos;
} Aluno;

typedef struct {
   Aluno alunos[MAS_ALUNOS];
   int quantidade;
} ListaAlunos;

void inicializarLista(ListaAlunos *lista);
void inserirAluno(ListaAlunos *lista, Aluno aluno);
int alunoDuplicado (ListaAlunos *lista, Aluno aluno);

#endif
