#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cubo.h"

int main(){
  float aresta;
  Cubo* valorCubo;

  printf("digite o valor da aresta: ");
  scanf("%f", &aresta);
  valorCubo = cubo_cria(aresta);
  printf("aresta = %2f\n", cubo_acessa(valorCubo));
  printf("area = %2f\n", cubo_areaTotal(valorCubo));
  printf("volume = %2f\n", cubo_volume(valorCubo);

  return(0);
}
