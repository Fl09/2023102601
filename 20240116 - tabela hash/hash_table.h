#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#define TAMANHO_BABELA 9 //ou 11, dependendo do caso

typedef struct Node {
  int chave;
  struct Node* proximo;
} Node;

typedef struct HashTable {
  Node** tabela;
} HashTable;

HashTable* criarHashTable();
void inserir(HashTable* hashTable, int chave);
void exibirHashTable(HashTable* hashTable);
void destruirHashTable(HashTable* hashTable);

#endif // HASH_TABLE_H
