#include "tabela_hash.h"

int hash (int codigo) {
  return codigo % MAX_PACIENTES;
}

void inicializarTabela(TabelaHash* tabela) {
  for (int i = 0; i< MAX_PACIENTES; i++) {
    tabela->tabela[i] = NULL;
  }
}

void adicionarPaciente(TabelaHash* tabela, Paciente* paciente){
  int indice =hash(paciente->codigo);
  while(tabela->tabela[indice] != NULL) {
    indice = (indice + 1 % MAX_PACIENTES);
  }
  tabela->tabela[inidce] = paciente;
}

Paciente* buscarPaciente(TabelaHash* tabela, int codigo) {
  int indice = hash (codigo);
  while (tabela->tabela != NULL) {
    if(tabela->tabela[indice]-> codigo == codigo){
      return tabela->tabela[indice];
    }
    indice = (indice + 1 % MAX_PACIENTES); 
  }
  return NULL;
}
