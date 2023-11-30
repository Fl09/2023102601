#include "listaAlunos.h"

int main(){
  ListaAlunos lista;

  inicializarLista(&lista); //inicializar a lista

  // inserir elementos
  inserirElemento(&lista, 103);
  inserirElemento(&lista, 105);
  inserirElemento(&lista, 101);
  inserirElemento(&lista, 104);
  inserirElemento(&lista, 102);

  //exibir a lista
  exibirLista(&lista);

  //excluir um elemento
  excluirElemento(&lista, 105);

  //exibir a lista após exclusão
  exibirLista(&lista);

  //alterar o valor de uma matrícula
  alterarMatricula(&lista, 102, 110);

  //exibir a lista após a alteração
  exibirLista(&lista);

  //liberar a lista
  liberarLista(&lista);

  return 0;
  
}
