#ifndef LISTA_LIGADA_ESTATICA_H
#define LISTA_LIGADA_ESTATICA_H

#define TAMANHO_MAX 100

typedef struct {
int dados[TAMANHO_MAX];
int tamanho;
} ListaLigadaEstatica;

void inicializarLista(ListaLigadaEstatica *lista);
void exibirLista(ListaLigadaEstatica lista);
void copiarLista(ListaLigadaEstatica *destino, ListaLigadaEstatica origem);
void concatenarListas(ListaLigadaEstatica *resultado, ListaLigadaEstatica lista1, ListaLigadaEstatica lista2);
void intercalarListas(ListaLigadaEstatica *resultado, ListaLigadaEstatica lista1, ListaLigadaEstatica lista2);
