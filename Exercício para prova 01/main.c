#include <stdio.h>
#include "aluno.h"

int main(){
  ListaAlunos lista;
  Aluno aluno1 = {1, "Joao", 20, 0};
  Aluno aluno2 = {2, "Maria", 22, 1};
  Aluno aluno3 = {1, "Pedro", 25, 2};

  inicializarLista(&lista);

  inserirAluno(&lista, aluno1);
  inserirAluno (&lista, aluno2);

  if (alunoDuplicado(&lista, aluno3)){
    printf("O aluno está duplicado na lista. \n");
  } else{
    printf("O aluno não está duplicado na lista. \n");
  }

  return 0;
}
