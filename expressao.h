#define MAX_TAMANHO 100

#ifndef EXPRESSAO_H
#define EXPRESSAO_H

typedef struct {
    char dados[MAX_TAMANHO];
    int topo;
} Pilha;

void inicializarPilha(Pilha *pilha);
void empilhar(Pilha *pilha, char elemento);
char desempilhar(Pilha *pilha);
int isOperador(char c);
int prioridade(char c);
void infixToPrefix(char *infix, char *prefix);
void imprimirFormatado(const char* expressao, const char* expressaoPrefixa);
double avaliarPrefixa(char *prefixa);
#endif  // EXPRESSAO_H
