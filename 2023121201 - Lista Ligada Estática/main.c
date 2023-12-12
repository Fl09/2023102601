#include "lista_alunos.h"

int main(){
  ListaAlunos lista;
  Aluno aluno1 = {1, "Gabriel", 22};
  Aluno aluno2 = {3, "Cris", 20};
  Aluno aluno1 = {2, "Vitória", 21};

  inicializarLista(&lista);

  inserirElementoOrdenado(&lista, aluno1);
  inserirElementoOrdenado(&lista, aluno2);
  inserirElementoOrdenado(&lista, aluno3);

  printf("lista de alunos:\n");
  exibirLista(lista);
  
  printf("Quantidade de elementos na lista: %d\n", quantidadeElementos(lista));
  excluirElemento(&lista, 3);

  printf("\nLista de alunos apos excluir o aluno com matricula 3:\n");
  exibirLista(lista);

  reiniciarLista(&lista);

  printf("\nLista de alunos apos reiniciar:\n");
  exibirLista(lista);

    return 0;
}
