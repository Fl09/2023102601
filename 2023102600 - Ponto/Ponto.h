#include <stdio.h>
#include <stdlib.h>

#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

int main (){
   float x;
   float y;
   int* pto1;
   int* pto2;
   
typedef struct ponto Ponto;

Ponto* Cria_ponto (float x, float y);
void Libera_ponto (Ponto * pto);
int Acessa_ponto (Ponto * pto, float *x, float * y);
float Distancia_ponto (Ponto *pto1, Ponto *pto2);

printf("Digite o valor de x: ");
scanf("%f", &x);
printf("Digite o valor de y: ");
scanf("%f", &y);

  
return 0;
#endif
}
