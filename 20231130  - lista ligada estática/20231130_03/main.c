#include <stdio.h>
#include "lista_ligada_estatica.h"

int main(){
  ListaLigadaEstatica lista;
  inicializarLista(&lista);

  adicionarElemento(&lista, 1);
  adicionarElemento(&lista, 2);
  adicionarElemento(&lista, 3);

  printf("lista original: ");
  percorrerLista(&lista);

  ListaLigadaEstatica listaL1, listaL2;

  construirListaL1(&lista, &listaL1);
  printf("Lista L1: ")
  percorrerLista (&listaL1);

  construirListaL2(&lista, &listaL2);
  printf("Lista L2: ")
  percorrerLista (&listaL2);
}
