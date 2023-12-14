#ifndef LISTA_DUPLA_H
#define LISTA_DUPLA_H

typedef struct NoD {
  char nome[30];
  struct NoD* proximo;
  struct NoD* anterior;
} NoD;

typedef struct {
  NoD* cabeca;
} LISTA_DUPLA

void inicializarListaD(LISTA_DUPLA* lista);
void inserirAluno (LISTA_DUPLA* lista, const char* nome);
void percorrerListaD(LISTA_DUPLA lista);

#endif
