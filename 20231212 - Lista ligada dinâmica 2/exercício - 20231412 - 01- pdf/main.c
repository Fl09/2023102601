#include <studio.h>
#include "lista.h"

void ordenarLista(Lista* listaL, Lista* listaK);

int main() {
  //criar lista ordenada (L)
  Lista* listaL = criarLista();
  inserirNoInicio(ListaL, 6);
  inserirNoInicio(ListaL, 4);
  inserirNoInicio(ListaL, 8);
  inserirNoInicio(ListaL, 2);

  //criar lsita ordenada(K)
  Lista* listaK = criarLista();

  //chamar função para ordenar L e preencher K
  ordenarLista(listaL, listaK);

  //IMPRIMIR A LISTA ORDENADA
  printf("Lista Ordenada: ");
  imprimir(listaK);

  //liberar memória
  liberarLista(listaL);
  liberarLista(ListaK);
  return 0;
}

void ordernarLista (Lista* listaL, Lista* listaK) {
  while(listaL->inicio != NULL){
    //remover onó do inicio da lista
    Node* noRemovido = listaL->inicio;
    listaL->inicio = noRemovido->proximo;
  // Inserir o nó no início da listaK mantendo a ordem
        if (listaK->inicio == NULL || noRemovido->valor > listaK->inicio->valor) {
            // Inserir no início se a lista está vazia ou o valor é maior que o primeiro elemento
            noRemovido->proximo = listaK->inicio;
            noRemovido->anterior = NULL;

            if (listaK->inicio != NULL) {
                listaK->inicio->anterior = noRemovido;
            } else {
                // Se a lista estava vazia, o novo nó também será o fim da lista
                listaK->fim = noRemovido;
            }

            listaK->inicio = noRemovido;
        } else {
            // Inserir em ordem mantendo a lista ordenada
            Node* atual = listaK->inicio;

            while (atual->proximo != NULL && noRemovido->valor < atual->proximo->valor) {
                atual = atual->proximo;
            }

            noRemovido->proximo = atual->proximo;
            noRemovido->anterior = atual;

            if (atual->proximo != NULL) {
                atual->proximo->anterior = noRemovido;
            } else {
                // Se o nó foi inserido no final, atualizamos o fim da lista
                listaK->fim = noRemovido;
            }

            atual->proximo = noRemovido;
        }
    }
}
