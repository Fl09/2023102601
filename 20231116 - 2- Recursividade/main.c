#include <stdio.h>
#include "k_ésimo_digito.h"

int main (){
  int numero, k;

  //obtém a entrada do usuário
  printf ("digite um número inteiro:");
  scanf("%d", &numero);

  printf("digite o valor de k: ");
  scanf("%d", &k);

  // chama a função para obter o k -ésimo dígito
  int resultado = k_esimo_digito(numero, k);

  //exibe o resultado
  printf ("O %d-ésimo dígito de %d é: %d\n", k, numero, resultado);

  return 0;
}
