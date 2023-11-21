#ifndef LISTA_LINEAR_H
#define LISTA_LINEAR_H

typedef struct {
   int tamanho_maximo;
   int elementos[100];
   int ultimo;
}ListaLinear

ListaLinear criar_lista();
void inserir_final(ListaLinear *lista, int elemento);
void inserir_ordenado(ListaLinear *lista, int elemento);
void inserir_elemento(ListaLinear *lista, int chave);
void imprimir_lista(ListaLinear lista);

#endif 
