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

    if (tabelaHash->tabela[indice] == NULL || tabelaHash->tabela[indice]->disponivel == 1) {
        tabelaHash->tabela[indice] = novoPaciente;
    } else {
        // Atualizar o paciente existente
        Paciente* atual = tabelaHash->tabela[indice];
        while (atual->disponivel == 0 && atual->codigo != codigo) {
            atual++;
        }
        if (atual->codigo == codigo) {
            // Atualizar os dados do paciente
            strcpy(atual->nome, nome);
            strcpy(atual->cpf, cpf);
            atual->idade = idade;
            atual->disponivel = 1; // Marcar como disponível
        } else {
            fprintf(stderr, "Erro ao inserir/atualizar paciente\n");
        }
    }
}

Paciente* buscarPaciente(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];
    while (atual != NULL) {
        if (atual->codigo == codigo && atual->disponivel == 1) {
            return atual;
        }
        atual++;
    }

    return NULL;
}

void excluirPacienteListaLigada(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];
    while (atual != NULL && (atual->codigo != codigo || atual->disponivel == 0)) {
        atual++;
    }

    if (atual == NULL) {
        fprintf(stderr, "Paciente não encontrado\n");
        return;
    }

    atual->disponivel = 0; // Marcar como indisponível
}

void excluirPacienteArrayPonteiros(TabelaHash* tabelaHash, int codigo) {
    unsigned int indice = funcaoHash(codigo, tabelaHash->tamanho);

    Paciente* atual = tabelaHash->tabela[indice];

    while (atual != NULL && (atual->codigo != codigo || atual->disponivel == 0)) {
        atual++;
    }

    if (atual == NULL) {
        fprintf(stderr, "Paciente não encontrado\n");
        return;
    }

    atual->disponivel = 0; // Marcar como indisponível
}

void exibirTabelaHash(TabelaHash* tabelaHash) {
    for (int i = 0; i < tabelaHash->tamanho; i++) {
        Paciente* atual = tabelaHash->tabela[i];
        if (atual != NULL && atual->disponivel == 1) {
            printf("Código: %d, Nome: %s, CPF: %s, Idade: %d\n", atual->codigo, atual->nome, atual->cpf, atual->idade);
        }
    }
}

void destruirTabelaHash(TabelaHash* tabelaHash) {
    for (int i = 0; i < tabelaHash->tamanho; i++) {
        free(tabelaHash->tabela[i]);
    }

    free(tabelaHash->tabela);
    free(tabelaHash);
}
