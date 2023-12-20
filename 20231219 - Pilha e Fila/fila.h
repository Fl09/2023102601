#ifndef FILA_H
#define FILA_H

typedef struct {
  char nome [50];
  int identficador;
} Aviao;

typedef struct No {
  Aviao aviao;
  struct No* proximo;
} No;

typedef struct {
No* frente;
No* tras;
} Fila;

void inicializarFila(Fila* fila);
int tamanhoFila(Fila* fila);
void enfileirar(Fila* fila, Aviao aviao);
Aviao desenfileirar(Fila* fila);
Aviao frenteFila(Fila* fila);
void imprimirFila(Fila* fila);

#endif // FILA_H
