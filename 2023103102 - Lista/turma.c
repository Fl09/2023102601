#include <stdio.h>
#include <stdlib.h>
#include "2023103102 - aluno.h"
#include "turma.h"

Turma criarTurma (int quantidade){
  Turma turma;
  turma.alunos = (Aluno*)malloc(sizeof(Aluno) * quantidade);
  turma.quantidade = quantidade;
  return turma;
}

void inserirAluno(Turma* turma, Aluno aluno, int posicao) {
  if (posicao>= 0  && posicao <turma -> quantidade){
    turma ->alunos [posicao] = aluno;
  } else{
    printf("Posicao invalida para insercao.\n");
  }
}

void liberarTurma(Turma* turma){
  free (turma -> alunos);
  turma->quantidade = 0;
}

void buscarAluno(Turma turma, int codigo){
  for (int i = 0; i < turma.quantidade; i++){
    if (turma.alunos[i].codigo == codigo){
      printf("Aluno encontrado:\n");
      printf("código: %d\n", turma.alunos[i].codigo);
      printf("Nome: %s\n", turma.alunos[i].nome);
      printf("Idade: %d\n", turma.alunos[i].idade);
      printf("coeficiente: %.2f\n", turma.alunos[i].coeficiente);
      return;
    }
  }

  printf("Aluno com código %d não encontrado.\n", codigo);
}

void imprimirTurma(Turma turma){
  printf("código e nome dos alunos na turma:\n");
  for (int i = 0; i < turma.quantidade; i++) {
    printf("código: %d, Nome: %s\n", turma.alunos[i].codigo, turma.alunos[i].nome);
  }
}
