#ifdenf PILHA_H
#define PILHA_H

typedef struct {
  int id;
  char nome[50];
} Aviao;

typedef struct No{
  Aviao aviao;
  struct No* proximo;
} No;

typedef struct{
  No* topo;
} Pilha;

void inicializarHangar(Pilha* pilha);
void adicionarAviao(Pilha* pilha, Aviao aviao);
void listarAvioes(Pilha pilha);
void listarPrimeiroAviao(Pilha pilha);
void tirarAviao(Pilha* pilha);
void tirarAviaoPorPosicao(Pilha* pilha, int posicao);
int contarAvioes(Pilha pilha);

#endif
