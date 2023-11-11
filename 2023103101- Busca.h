#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *vetor;
    int tamanho;
} LISTA;

LISTA* criarLista (int tamanho);
void liberarLista (LISTA *lista);
float inserirElemento (LISTA *lista, int elemento, int posicao);
void imprimirLista (LISTA lista);
void buscaSequencial (LISTA lista, int elemento);
void buscaSequencialOrdenada (LISTA lista, int elemento, int* comparacoes);
void buscaBinaria (LISTA lista, int elemento, int *comparacoes);
void buscarMaior (LISTA lista);
void buscarMenor (LISTA lista);
void somarElementos(LISTA lista);
void multiplicarElementos(LISTA lista);
void buscaBinariaRecursiva (LISTA lista, int elemento, int inicio, int fim, int *comparacoes);
