#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#define MAX_ALUNOS 100

tydepef struct {
  int elementos [MAX_ALUNOS];
  int quantidade;
} ListaAlunos;

void inicializarlista (ListaAlunos *lista);
void liberarLista (ListaAlunos *lista);
int tamanhoLista(ListaAlunos *lista);,
int listaCheia(const ListaAlunos *lista); 
int listaVazia (const ListaAlunos *lista); 
void exibirLista (const ListaAlunos *lista); 
void inserirLista (ListaAlunos *lista, int matricula); 
void excluirLista (ListaAlunos *lista, int matricula);
void alterarMatricula(ListaAlunos *lista, int matriculaAtual, int novaMatricula);

#endif 
