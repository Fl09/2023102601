#include <stdio.h>
#include "polinomio.h"

int main() {
  Lista* P1 = criarLista();
  inserirOrdenado(P1, 2,4);
  inserirOrdenado(P1, 6,8);
  inserirOrdenado(P1, 10,12);

  Lista* P2 =criarLista();
  iserirOrdenado(P2, 3,5);
  inserirOrdenado (P2, 0,1);
  
  Lista* resultado = somaPolinomio(P1, P2);
    printf("Soma: ");
    imprimirPolinomio(resultado);

    free(P1);
    free(P2);
    free(resultado);

    return 0;
}
