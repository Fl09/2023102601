#ifndef LISTA_CIRCULAR_DUPLA_H
#define LISTA_CIRCULAR_DUPLA_H

typedef struct NoCD {
  char nome[30];
  struct NoCD* proximo;
  struct NoCD* anterior;
} NoCD;

typedef struct {
  NoCD* cabeca;
} LISTA_CIRCULAR_DUPLA;

void inicializarListaCD(LISTA_CIRCULAR_DUPLA* lista);
void inserirAlunoCD(LISTA_CIRCULAR_DUPLA* lista, const char* nome);
void percorrerListaCD(LISTA_CIRCULAR_DUPLA lista);

#endif
