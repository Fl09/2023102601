#ifndef POLINOMIO_H
#define POLINOMIO_H

typedef struct Node {
  int coeficiente;
  int expoente;
  struct Node* proximo;
} Node;

typedef struct Lista {
  Node* ininio;
} Lista;

Lista* criarLista();
void inserirOrdenado(Lista* lista, int coeficiente, inr expoente);
void imprimirPolinomio(Lista* P1, Lista* P2);
Lista* somaPolinomio (Lista* P1, Lista* P2);

#endif
