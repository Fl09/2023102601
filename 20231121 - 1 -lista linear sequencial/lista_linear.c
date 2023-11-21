#include "lista_linear.h"
#include <stdio.h>

ListaLinear criar_lista(){
  ListaLinear lista;
  lista.tamanho_maximo = 100;
  lista.ultimo = -1;
  return lista;
}

void inserir_final(ListaLinear *lista, int elemento){  // verifica se há espaço na lista
  if(lista ->ultimo <lista ->tamanho_maximo -1){
    lista ->ultimo = lista->ultimo +1;
    lista->elementos[lista->ultimo] = elemento;
  } else{
    printf ("Erro: Lista cheia\n");
  }
}

void inserir_ordenado(ListaLinear *lista, int elemento){ // encontra a posição correta para o novo elemento, move os elementos maiores para abrir espaço e inserir o novo elemento
  int posicao = 0;
  while(posicao <= lista ->ultimo && lista ->elementos[posicao] < elemento){
    posicao = posicao +1;
  }

  if(posicao <= lista -> ultimo){
    for(int i = lista->ultimo; i >= posicao;i--){
      lista ->elementos[i+1] = lista->elementos [i];
    }
    
    lista ->elementos[posicao] = elemento;
    lista-> ultimo = lista->ultimo + 1;
  }
}

void eliminar_elemento(ListaLinear *lista, int chave){ // procura a posição do elemento coom a chave especificada, move os elementos restantes e decrementa o último
  int posicao = 0;
  while (posicao <=lista ->ultimo && lista ->elementos[posicao]!= chave){
    posicao = posicao + 1;
  }

  if(posicao <= lista->ultimo){
    for(int i = posicao; i < lista->ultimo; i++){
      lista->elementos[i] = lista->elementos[i + 1];
    }

    lista-> ultimo = lista->ultimo -1;
  } else{
      printf("Elemento não encontradp\n");
  }
}

void imprimir_lista(ListaLinear lista){ //percorre a lista e imprime cada elemento
  for(int i = 0; i <=lista.ultimo; i++){
    printf("%d ", lista.elementos[i]);
  }
  printf("\n");
}
