#ifndef HASH_TABELA_H
#define HASH_TABELA_H

typedef struct Paciente {
    int codigo;
    char nome[100];
    char cpf[12];
    int idade;
    struct Paciente* proximo;
} Paciente;

typedef struct TabelaHash {
    int tamanho;
    Paciente** tabela;
} TabelaHash;

TabelaHash* criarTabelaHash(int tamanho);
void inserirPaciente(TabelaHash* tabelaHash, int codigo, const char* nome, const char* cpf, int idade);
Paciente* buscarPaciente(TabelaHash* tabelaHash, int codigo);
void removerPaciente(TabelaHash* tabelaHash, int codigo);
void exibirTabelaHash(TabelaHash* tabelaHash);
void destruirTabelaHash(TabelaHash* tabelaHash);

#endif  // HASH_TABELA_H
