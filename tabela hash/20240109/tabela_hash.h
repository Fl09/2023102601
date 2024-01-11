#ifndef TABELA_HASH_H
#define TABELA_HASH_H
#include "paciente.h"

typedef struct {

Paciente* tabela[MAX_PACIENTE];

}TabelaHash;

void inicializarTabela(TabelaHash* tabela);
void adicionarPaciente(TabelaHash* tabela, Paciente* paciente);
Paciente* buscarPaciente(TabelaHash* tabela, int condigo);

#endif
