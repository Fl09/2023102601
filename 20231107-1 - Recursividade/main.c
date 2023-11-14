#include <stdio.h>
#include "lista.h"

int main() {
  LISTA lista = criarLista(5);

  inserirElemento(&lista, 3);
  inserirElemento(&lista, 1);
  inserirElemento(&lista, 5);
  inserirElemento(&lista, 4);
  inserirElemento(&lista, 2);

  printf("Lista original: ");
  imprimirListaIterativo(lista);

  int elementoBusca = 4;
  int indice = buscaBinariaRecursiva(lista, elementoBusca, 0, lista.quantidade - 1);
    if (indice != -1) {
        printf("Elemento %d encontrado na posicao %d.\n", elementoBusca, indice);
    } else {
        printf("Elemento %d nao encontrado na lista.\n", elementoBusca);
    }

    printf("Lista recursiva: ");
    imprimirListaRecursivo(lista, 0);

    printf("Maior elemento: %d\n", buscarMaiorRecursivo(lista, 0));
    printf("Menor elemento: %d\n", buscarMenorRecursivo(lista, 0));
    printf("Soma dos elementos: %d\n", somaRecursiva(lista, 0));
    printf("Produto dos elementos: %d\n", produtoRecursivo(lista, 0));

    liberarLista(&lista);

    return 0;

}
