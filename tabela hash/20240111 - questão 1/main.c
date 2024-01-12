#include "hash_tabela.h"

int main() {
    TabelaHash* tabelaHashListaLigada = criarTabelaHash(10);
    TabelaHash* tabelaHashArrayPonteiros = criarTabelaHash(10);

    inserirPaciente(tabelaHashListaLigada, 101, "Maria Flor", "00385472111", 22);
    inserirPaciente(tabelaHashListaLigada, 202, "Clei", "80054371221", 24);

    inserirPaciente(tabelaHashArrayPonteiros, 101, "Maria Flor", "00385472111", 22);
    inserirPaciente(tabelaHashArrayPonteiros, 202, "Clei", "80054371221", 24);

    printf("Exibindo Tabela Hash (Lista Ligada):\n");
   
