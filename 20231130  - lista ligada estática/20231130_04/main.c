#include <stdio.h>
#include "lista_ligada_estatica.h"

int main(){
  ListaLigadaEestatica lista1, lista2, resultado;

   // Inicializando listas
    inicializarLista(&lista1);
    inicializarLista(&lista2);

    // Adicionando elementos às listas (pode ser personalizado)
    for (int i = 1; i <= 5; i++) {
        lista1.dados[lista1.tamanho++] = i;
    }

    for (int i = 6; i <= 10; i++) {
        lista2.dados[lista2.tamanho++] = i;
    }

    // Exibindo listas originais
    printf("Lista 1: ");
    exibirLista(lista1);

    printf("Lista 2: ");
    exibirLista(lista2);

    // Copiar uma lista para outra
    copiarLista(&resultado, lista1);
    printf("\nLista Copiada: ");
    exibirLista(resultado);

    // Concatenar listas
    concatenarListas(&resultado, lista1, lista2);
    printf("\nLista Concatenada: ");
    exibirLista(resultado);

    // Intercalar listas
    intercalarListas(&resultado, lista1, lista2);
    printf("\nLista Intercalada: ");
    exibirLista(resultado);

    return 0;
  
}
