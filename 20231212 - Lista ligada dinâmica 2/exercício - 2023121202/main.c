#include <stdio.h>
#include "lista_ligada_dinamica.h"

int main() {
  LISTA_LIGADA_DINAMICA lista;
  inicializarLista(&lista);
  
  //adicionar elementos à lista
  inserirElemento(&lista, 1);
  inserirElemento(&lista, 2);
  inserirElemento(&lista, 3);
  inserirElemento(&lista, 4);

  printf("Listaoriginal: ");
  percorrerLista(lista);

  //construir L1A
  LISTA_LIGADA_DINAMICA listaL1A = construirListaL1A(lista);
  printf("Lista L1A: ");
  percorrerLista(listaL1A);

  //construir L1B
  LISTA_LIGADA_DINAMICA listaL1B = construirListaL1B(lista);
  printf("Lista L1B: ");
  percorrerLista(listaL1B);

  return 0;
  
}
