#ifndef LISTA_H
#define LISTA_H

typedef struct Node {
  int valor;
  struct Node* proximo;
  struct Node* anterior;
} Node;

typedef struct Lista {
  Node* inicio;
  Node* fim;
} Lista;

Lista* criarLista();
void inserirNoInicio(Lista* lista, int valor);
void imprimirLista(Lista* lista);
void liberarLista(Lista* lista);

#endif
