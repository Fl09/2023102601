#ifndef LISTA_LIGADA_DINAMICA_H
#define LISTA_LIGADA_DINAMICA_H

typedef struct No{
  int dados;
  struct No* proximo;
}

typedf struct {
  No* cabeca;
} LISTA_LIGADA_DINAMICA;

void inicializarLista(LISTA_LIGADA_DINAMICA* lista);
void inserirElemento(LISTA_LIGADA_DINAMICA* lista, int elemento);
void percorrerLista(LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA construirListaL1A (LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA construirListaL1B (LISTA_LIGADA_DINAMICA lista);

#endif
