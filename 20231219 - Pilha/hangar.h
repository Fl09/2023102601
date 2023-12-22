#ifndef HANGAR_H
#define HANGAR_H

typedef struct {
    int id;
    char nome[50];
    // Adicione outras características conforme necessário
} Aviao;

typedef struct No {
    Aviao aviao;
    struct No* proximo;
} No;

typedef struct {
    No* topo;
} Pilha;

void inicializarHangar(Pilha* hangar);
void adicionarAviao(Pilha* hangar, Aviao aviao);
void listarAvioes(Pilha hangar);
void listarPrimeiroAviao(Pilha hangar);
void tirarAviao(Pilha* hangar);
void tirarAviaoPorPosicao(Pilha* hangar, int posicao);
int contarAvioes(Pilha hangar);

#endif

