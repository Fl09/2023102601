#ifndef TURMA_H
#define TURMA_H
#include "2023103102 - aluno.h"

typedef struct {

  Aluno* alunos;
  int quantidade;
} Turma;

Turma criarTurma (int quantidade);
void inserirAluno (Turma* turma, Aluno aluno, int posicao);
void liberarTurma (Turma* turma);
void buscarAluno (Turma turma, int codigo);
void imprimirTurma (Turma turma);

#endif
