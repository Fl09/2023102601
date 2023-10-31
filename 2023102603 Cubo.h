#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct cubo Cubo;

Cubo* cubo_cria(float a);
void cubo_libera(Cubo* c);
float cubo_acessa(Cubo* c);
void cubo_atribui (Cubo* c, float a);
float cubo_areaTotal(Cubo* c);
float cubo_volume(Cubo* c);
