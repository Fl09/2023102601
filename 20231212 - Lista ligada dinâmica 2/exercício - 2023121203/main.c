#include <stdio.h>
#include "lista_ligada_dinamica.h"

int main() {
  LISTA_LIGADA_DINAMICA lista1, lista2;
  inicializarLista(&lista1);
  inicializarLista(&lista2);

  //adicionar elementos às listas
  inserirElemento (&lista1, 1);
  inserirElemento (&lista1, 3);
  inserirElemento (&lista1, 5);

  inserirElemento (&lista2, 2);
  inserirElemento (&lista2, 4);
  inserirElemento (&lista2, 6);

  printf("Lista 1: ");
  percorrerLista(lista1);

  printf("Lista 2: ");
  percorrerLista(lista2);

  //a) copiar uma lista l1 para uma lista l2
  LISTA_LIGADA_DINAMICA listaCopiada = copiarLista(lista1);
  printf("Cópia da Lista 1: ");
  percorrerLista(listaCopiada);

  //b) concatenar uma lista l1 com uma lista l2
  LISTA_LIGADA_DINAMICA listaConcatenada = concatenarLista(lista1, lista2);
  printf("Concatenação da Lista 1 e Lista 2: ");
  percorrerLista(listaContatenada);

  //c) intercalar l1 e l2
  LISTA_LIGADA_DINAMICA listaIntercalada = intercaladaLista(lista1);
  printf("Cópia da Lista 1 e lista 2: ");
  percorrerLista(listaIntercalada;

  return 0;
}
