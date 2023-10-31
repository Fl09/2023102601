#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cubo.h"

struct cubo{
    float a;
};

Cubo* cubo_cria(float a){
  Cubo* c = (Cubo*) malloc(sizeof(Cubo));
  if (c != NULL){
           c ->a =  a;
  }
  return(c);
}

float cubo_areaTotal(Cubo* c){
  if(c!= NULL){
     return(6* c->a * c->a);
  }
}

float cubo_volume(Cubo* c){
  if(c != NULL){
   return( c->a * c->a * c->a);
  }
}
