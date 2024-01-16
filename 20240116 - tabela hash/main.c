#include "hash_table.h"

int main() {
    // Caso M = 9
    HashTable* hashTable1 = criarHashTable();

    int chaves1[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5};
    int numChaves1 = sizeof(chaves1) / sizeof(chaves1[0]);

    for (int i = 0; i < numChaves1; ++i) {
        inserir(hashTable1, chaves1[i]);
    }

    printf("Tabela Hash com M = 9:\n");
    exibirHashTable(hashTable1);

    destruirHashTable(hashTable1);

    // Caso M = 11
    HashTable* hashTable2 = criarHashTable();

    int chaves2[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5};
    int numChaves2 = sizeof(chaves2) / sizeof(chaves2[0]);

    for (int i = 0; i < numChaves2; ++i) {
        inserir(hashTable2, chaves2[i]);
    }

    printf("\nTabela Hash com M = 11:\n");
    exibirHashTable(hashTable2);



    return 0;
}
