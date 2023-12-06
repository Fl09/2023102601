#include "aluno.h"

void inicializarLista(ListaAlunos *lista){
  lista->quantidade = 0;
}

void inserirAluno(ListaAlunos *lista, Aluno aluno){
  if (lista->quantidade < MAX_ALUNOS){
    lista->alunos[lista->quantidade] = aluno;
    lista->quantidade++;
  }
}

int alunoDuplicado(ListaAluno *lista, Aluno aluno){
  for(int i = 0; i<lista ->quantidade; i++){
    if(lista->alunos[i].codigo == aluno.codigo){
      return 1; //aluno com o mesmo código encontrado
    }
  }
  return 0; //nenhum aluno duplicado encontrado
}
