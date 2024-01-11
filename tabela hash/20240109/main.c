#include <stdio.h>
#include "tabela_hash.h"

int main(){
  TabelaHash tabela;
  inicializarTabela(&tabela);

  //criar paciente
  Paciente* paciente1 = criarPaciente(101, "Maria", "00385472111", "22");
  Paciente* paciente2 = criarPaciente(202, "Clei", 80054371221, "24");

  // adicionar paciente na tabela
  adicionarPaciente(&tabela, &paciente1);
  adicionarPaciente(&tabela, &paciente2);

  //buscar paciente pelo código
  int codigoBusca = 202;
  Paciente* pacienteEncontrado = buscarPaciente(&tabela, codigoBusca);

  //exibir informações do paciente encontrado
  if(pacienteEncontrado != NULL){
    printf("Paciente encontrado: \n");
    printf("Código: %d\n", pacienteEncontrado->codigo);
    printf("Nome: %s\n", pacienteEncontrado->nome);
    printf("CPF: %s\n", pacienteEncontrado->cpf);
    printf("Idade: %s\n", pacienteEncontrado->idade);
  } else{
    printf("Paciente com código %d não encontrado.\n",codigoBusca);
  }
  return 0;
}

    
