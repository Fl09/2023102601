#include "lista_linear.h"

int main(){
  ListaLinear minha_lista = criar_lista();

  inserir_final(&minha_lista, 1);
  inserir_final(&minha_lista, 6);
  inserir_ordenado(&minha_lista, 5);
  eliminar_elemento(&minha_lista, 6);
  imprimir_lista(minha_lista);

  //chama as funções definidas anteriormente para operar na lista e imprime os resultados

  return 0;
  
}
