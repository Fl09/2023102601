#include <stdio.h>
#include "lista_circular_dupla.h"
#include "lista_circular.h"
#include "lista_dupla.h"

int main() {
  //Lista circular duplamente ligada (alunos em que o nome inicia com a letra desde A até D)
  LISTA_CIRCULAR_DUPLA listaCD;
  inicializarListaCD(&listaCD);
  inserirAlunoCD (&listaCD, "Alicia");
  inserirAlunoCD (&listaCD, "Beatriz");
  inserirAlunoCD (&listaCD, "Carlos");
  inserirAlunoCD (&listaCD, "Daniel");

  printf("Lista circular duplamente ligada: ");
  percorrerListaCD(listaCD);

  // lista circular (alunos em que o nome inicia com a letra E até J)
  LISTA_CIRCULAR listaC;
  inicializarListaC(&listaC);
  inserirAlunoCD (&listaC, "Emilly");
  inserirAlunoCD (&listaC, "Flávio");
  inserirAlunoCD (&listaC, "Gabriel");
  inserirAlunoCD (&listaC, "Hannah");
  inserirAlunoCD (&listaC, "Icaro");
  inserirAlunoCD (&listaC, "João");

  printf("Lista circular: ");
  percorrerListaC(listaC);

  //Lista duplamente ligada (alunos em que o nome inicia com a letra desde L até Y)
  LISTA_DUPLA listaD;
  inicializarListaD(&listaD);
  inserirAlunoD (&listaD, "Larissa");
  inserirAlunoD (&listaD, "Mia");
  inserirAlunoD (&listaD, "Noah");
  inserirAlunoD (&listaD, "Olivia");
  inserirAlunoD (&listaD, "Pedro");
  inserirAlunoD (&listaD, "Renan");
  inserirAlunoD (&listaD, "Sara");
  inserirAlunoD (&listaD, "Thaís");
  inserirAlunoD (&listaD, "Vânia");
  inserirAlunoD (&listaD, "Yan");

  printf("Lista Dupla: ");
  percorrerListaD(listaD);

  return 0;
}
