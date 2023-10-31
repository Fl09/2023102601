#include <stdio.h>
#include "complexo.h"

int main(){
  complexo a,b,c,d,e,f;
  a = complexo_cria();
  b = complexo_cria();
  c = complexo_soma(a,b);
  d = complexo_subtracao(a,b);
  e = complexo_multiplicacao(a,b);
  f = complexo_divisao(a,b);
  complexo_imprime(c);
  printf("%1f\n, complexo_soma(c));
  complexo_imprime(d);
  printf("%1f\n, complexo_subitracao(d));
  complexo_imprime(e);
  printf("%1f\n, complexo_multiplicacao(e));
  complexo_divisão(f);
  printf("%1f\n, complexo_divisao(f));

  return 0; 
}
