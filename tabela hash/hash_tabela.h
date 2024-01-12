#ifndef HASH_TABELA_H
#define HASH_TABELA_H

typedef struct {
    int chave;
    int valor; // Pode ser estendido conforme a necessidade
} EntradaHash;

typedef struct {
    EntradaHash* tabela;
    int tamanho;
} TabelaHash;

void inicializarTabelaHash(TabelaHash* th, int tamanho);
void inserirSondagemLinear(TabelaHash* th, int chave);
void inserirSondagemQuadratica1(TabelaHash* th, int chave);
void inserirSondagemQuadratica2(TabelaHash* th, int chave);
void inserirHashDuplo(TabelaHash* th, int chave);
void imprimirTabelaHash(TabelaHash* th);

#endif // HASH_TABELA_H
