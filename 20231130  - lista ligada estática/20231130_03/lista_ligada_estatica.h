#ifndef LISTA_LIGADA_ESTATICA_H
#define LISTA_LIGADA_ESTATICA_H

#define MAX_ELEMENTOS 100 // ajuste conforme necessário

typedef struct{
int elementos[MAX_ELEMENTOS];
int tamanho;
} ListaLigadaEstatica;

void inicializarLista(ListaLigadaEstatica *lista);
void adicionarElemento(ListaLigadaEstatica *lista, int elemento);
void petcorrerLista(ListaLigadaEstatica *lista);
void construirLista1(ListaLigadaEstatica *lista, ListaLigadaEstatica *listaL1);
void construirLista2(ListaLigadaEstatica *lista, ListaLigadaEstatica *listaL2);

#endif
