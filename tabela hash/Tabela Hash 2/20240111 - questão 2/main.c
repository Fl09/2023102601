#include "hash_tabela.h"

int main() {
    TabelaHash* tabelaHashListaLigada = criarTabelaHash(10);
    TabelaHash* tabelaHashArrayPonteiros = criarTabelaHash(10);

    inserirPaciente(tabelaHashListaLigada, 1, "João Silva", "12345678901", 25);
    inserirPaciente(tabelaHashListaLigada, 2, "Maria Santos", "98765432101", 30);

    inserirPaciente(tabelaHashArrayPonteiros, 1, "João Silva", "12345678901", 25);
    inserirPaciente(tabelaHashArrayPonteiros, 2, "Maria Santos", "98765432101", 30);

    printf("Exibindo Tabela Hash (Lista Ligada):\n");
    exibirTabelaHash(tabelaHashListaLigada);

    printf("\nExibindo Tabela Hash (Array de Ponteiros):\n");
    exibirTabelaHash(tabelaHashArrayPonteiros);

    int codigoBusca = 2;
   
