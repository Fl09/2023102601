#include "hash_tabela.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int funcaoHash(int codigo, int tamanho) {
    return codigo % tamanho;
}

TabelaHash* criarTabelaHash(int tamanho) {
    TabelaHash* tabelaHash = (TabelaHash*)malloc(sizeof(TabelaHash));
    if (tabelaHash == NULL) {
        fprintf(stderr, "Erro na alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    tabelaHash->tamanho = tamanho;
    tabelaHash->tabela = (Paciente**)calloc(tamanho, sizeof(Paciente*));
    if (tabelaHash->tabela == NULL) {
        fprintf(stderr, "Erro na alocação de memória\n");
        free(tabelaHash);
        exit(EXIT_FAILURE);
    }

    return tabelaHash;
}

void inserirPaciente(TabelaHash* tabelaHash, int codigo, const char* nome, const char* cpf, int idade) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* novoPaciente = (Paciente*)malloc(sizeof(Paciente));
    if (novoPaciente == NULL) {
        fprintf(stderr, "Erro na alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    novoPaciente->codigo = codigo;
    strcpy(novoPaciente->nome, nome);
    strcpy(novoPaciente->cpf, cpf);
    novoPaciente->idade = idade;
    novoPaciente->disponivel = 1; // Marcando como disponível
    novoPaciente->proximo = tabelaHash->tabela[indice];
    tabelaHash->tabela[indice] = novoPaciente;
}

Paciente* buscarPaciente(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];
    while (atual != NULL) {
        if (atual->codigo == codigo && atual->disponivel == 1) {
            return atual;
        }
        atual = atual->proximo;
    }

    return NULL;
}

void excluirPacienteListaLigada(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];
    Paciente* anterior = NULL;

    while (atual != NULL && (atual->codigo != codigo || atual->disponivel == 0)) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        fprintf(stderr, "Paciente não encontrado\n");
        return;
    }

    if (anterior == NULL) {
        tabelaHash->tabela[indice] = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
}

void excluirPacienteArrayPonteiros(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];

    while (atual != NULL && (atual->codigo != codigo || atual->disponivel == 0)) {
        atual = atual->proximo;
    }

    if (atual == NULL) {
        fprintf(stderr, "Paciente não encontrado\n");
        return;
    }

    atual->disponivel = 0; // Marcando como indisponível
}

void exibirTabelaHash(TabelaHash* tabelaHash) {
    for (int i = 0; i < tabelaHash->tamanho; i++) {
        Paciente* atual = tabelaHash->tabela[i];
        while (atual != NULL) {
            if (atual->disponivel == 1) {
                printf("Código: %d, Nome: %s, CPF: %s, Idade: %d\n", atual->codigo, atual->nome, atual->cpf, atual->idade);
            }
            atual = atual->proximo;
        }
    }
}

void destruirTabelaHash(TabelaHash* tabelaHash) {
    for (int i = 0; i < tabelaHash->tamanho; i++) {
        Paciente* atual = tabelaHash->tabela[i];
        while (atual != NULL) {
            Paciente* proximo = atual->proximo;
            free(atual);
            atual = proximo;
        }
    }

    free(tabelaHash->tabela);
    free(tabelaHash);
}
