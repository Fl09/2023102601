#include <stdio.h>
#include "VetorOperacoes.h"

int main(){
  Vetor vetor1 = {1.0, 2.0, 3.0};
  Vetor vetor2 = {4.0, 5.0, 6.0};
  Vetor resultado_soma;
  float resultado_produto_escalar;

  //realiza a soma dos vetores e exibe o resultado
  soma(&vetor1, &vetor2, &resultado_soma);
  printf("soma dos vetores: (%.2f, %.2f, %.2f)\n",resultado_soma.x, resultado_soma.y, resultado_soma.z);

  //calcula o produto escalar e exibe o resultado
  resultado_produto_escalar = produto_escalar(&vetor1, &vetor2);
  printf ("Produto escalar: %.2f\n", resultado_produto_escalar);

  return 0;
}
