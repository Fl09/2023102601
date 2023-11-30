#include "lista_alunos.h"
#include <stdio.h>

int main(){
  ListaAlunos turma;
  inicializarLista(&turma);

  Aluno aluno1 = {101, "Maria", 20};
  Aluno aluno2 = {103, "Clei", 21};
  Aluno aluno2 = {102, "João Gabriel", 22};

  inserirElemento(&turma, aluno1);
  inserirElemento(&turma, aluno2);
  inserirElemento(&turma, aluno3);

  exibirElementos(turma);

  printf("quantidade de elementos na lista: %d\n", quantidadeElementos(turma));

  int matriculaParaExcluir = 103;
  excluirElemento(&turma, matriculaParaExcluir);
  printf("Elemento com matrícula %d excluído. \n", matriculaParaExcluir);

  exibirElementos(turma);

  int matriculaParaAlterar = 101;
  int novaMatricula = 105;
  alterarMatricula(&turma, matriculaParaAlterar, novaMatricula);
  printf("Matrícula do aluno alterada de %d para %d.\n", matriculaParaAlterar, novaMatricula);

  exibirElementos(turma);

  liberarLista(&turma);

  return 0;
}
