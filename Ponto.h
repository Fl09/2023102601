#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUSED

struct ponto{
   float x;
   float y;
};

trypedef struct ponto Ponto;

Ponto* Cria_ponto (float x, float y);
void Libera_ponto (Ponto * pto);
int Acessa_ponto (Ponto * pto, float *x, float * y);
float Distancia_ponto (Ponto *pto1, Ponto *pto2);

#endif
