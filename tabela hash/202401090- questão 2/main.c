#include "hash_tabela.h"

int main() {
    TabelaHash* tabelaHash = criarTabelaHash(10);

    inserirPaciente(tabelaHash, 101, "Maria Flor", "00385472111", 22);
    inserirPaciente(tabelaHash, 202, "Clei", "80054371221", 24);

    printf("Exibindo Tabela Hash:\n");
    exibirTabelaHash(tabelaHash);

    int codigoBusca = 2;
    Paciente* pacienteBuscado = buscarPaciente(tabelaHash, codigoBusca);

    if (pacienteBuscado != NULL) {
        printf("\nPaciente encontrado:\n");
        printf("Código: %d, Nome: %s, CPF: %s, Idade: %d\n", pacienteBuscado->codigo, pacienteBuscado->nome, pacienteBuscado->cpf, pacienteBuscado->idade);
    } else {
        printf("\nPaciente não encontrado\n");
    }

    int codigoRemocao = 1;
    removerPaciente(tabelaHash, codigoRemocao);

    printf("\nDepois de remover o paciente com código %d:\n", codigoRemocao);
    exibirTabelaHash(tabelaHash);

    destruirTabelaHash(tabelaHash);

    return 0;
}
