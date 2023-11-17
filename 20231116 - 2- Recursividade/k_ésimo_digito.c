#include "k_ésimo_digito.h"
#include <stdio.h>

int k_esimo_digito_recursivo (int n, int k, int pos){
  //caso base: se chegar à posição k, retorna o dígito correspondente
  if (pos == k){
    return n % 10;
  } else{
    // chamada recursiva para o próximo dígito
    return k_esimo_digito_recursivo(n/ 10, k, pos + 1);
  }
}

int k_esimo_digito(int n, int k){
  // inicia a chamada recursiva a partir da posição 1
  return k_esimo_digito_recursivo (n, k, 1);
}
