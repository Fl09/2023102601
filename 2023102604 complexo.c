#include <stdio.h>
#include <math.h>
#include "complexo.h"

complexo complexo_cria(double x, double y){
  complexo c;
  c.x = x;
  c.y= y;
  return c;
}

complexo complexo_soma(complexo a, complexo b){
  return complexo_cria(a.x + b.x, a.y + b.y);
}

complexo complexo_subtracao(complexo a, complexo b){
  return complexo_cria(a.x - b.x, a.y - b.y);
}

complexo complexo_multiplicacao(complexo a, complexo b){
  return complexo_cria(a.x * b.x - a.y * b.y, a.x * b.y + b.x* a.y);
}

complexo complexo_divisao(complexo a, complexo b){
  return complexo_cria(a.x / b.x, a.y / b.y);
}
