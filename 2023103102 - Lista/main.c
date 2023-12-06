#include <stdio.h>
#include "2023103102 - aluno.h"
#include "turma.h"


int main() {
  Turma turma = criarTurma(3);

  Aluno aluno1 = {1, "Mia", 13, 4.5};
  Aluno aluno2 = {2, "Rodrigo", 15, 8.0};
  Aluno aluno3 = {3, "Fernanda", 14, 7.5};

  inserirAluno(&turma, aluno1, 0);
  inserirAluno(&turma, aluno2, 1);
  inserirAluno(&turma, aluno3, 2);

  imprimirTurma(turma);

  buscarAluno(turma, 2);

  liberarTurma(&turma);

  return 0;
}
