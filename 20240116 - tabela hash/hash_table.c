#include "hash_table.h"
#include <stdio.h>
#include <stdlib.h>

HashTable* criarHashTable() {
    HashTable* hashTable = (HashTable*)malloc(sizeof(HashTable));
    hashTable->tabela = (Node**)malloc(TAMANHO_TABELA * sizeof(Node*));

    for (int i = 0; i < TAMANHO_TABELA; ++i) {
        hashTable->tabela[i] = NULL;
    }

    return hashTable;
}

void inserir(HashTable* hashTable, int chave) {
    int indice = (2 * chave + 5) % TAMANHO_TABELA;

    Node* novoNode = (Node*)malloc(sizeof(Node));
    novoNode->chave = chave;
    novoNode->proximo = NULL;

    if (hashTable->tabela[indice] == NULL) {
        hashTable->tabela[indice] = novoNode;
    } else {
        novoNode->proximo = hashTable->tabela[indice];
        hashTable->tabela[indice] = novoNode;
    }
}

void exibirHashTable(HashTable* hashTable) {
    for (int i = 0; i < TAMANHO_TABELA; ++i) {
        printf("Posição %d: ", i);

        Node* atual = hashTable->tabela[i];
        while (atual != NULL) {
            printf("%d -> ", atual->chave);
            atual = atual->proximo;
        }

        printf("NULL\n");
    }
}

void destruirHashTable(HashTable* hashTable) {
    for (int i = 0; i < TAMANHO_TABELA; ++i) {
        Node* atual = hashTable->tabela[i];
        while (atual != NULL) {
            Node* proximo = atual->proximo;
            free(atual);
            atual = proximo;
        }
    }

    free(hashTable->tabela);
    free(hashTable);
}
