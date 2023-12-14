#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

typedef struct NoC {
  char nome[30];
  struct NoC* proximo;
} Noc;

typedef struct {
  NoC* cabeca;
} LISTA_CIRCULAR;

void inicializarListaC (LISTA_CIRCULAR* lista);
void inserirAlunoC (LISTA_CIRCULAR* lista,const char* nome);
void percorrerLista(LISTA_CIRCULAR lista);

#endif
