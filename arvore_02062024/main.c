#include <stdio.h>
#include "tree.h"

int main() {
    Tree* arvore = criarArvore();

    // Inserindo elementos na árvore
    inserir(arvore, 24);
    inserir(arvore, 10);
    inserir(arvore, 32);
    inserir(arvore, 5);
    inserir(arvore, 12);
    inserir(arvore, 29);
    inserir(arvore, 35);

    printf("Árvore Binária de Busca:\n");
    imprimirArvore(arvore->root);
    printf("\n");

    printf("Número de elementos na árvore: %d\n", contarElementos(arvore->root));

    int chaveBusca = 12;
    Node* resultado = buscar(arvore->root, chaveBusca);
    if (resultado) {
        printf("%d encontrado na árvore.\n", chaveBusca);
    } else {
        printf("%d não encontrado na árvore.\n", chaveBusca);
    }

    printf("Chaves dos elementos da árvore em Pré-ordem: ");
    travessiaPreordem(arvore->root);
    printf("\n");

    printf("Chaves dos elementos da árvore em In-ordem: ");
    travessiaEmOrdem(arvore->root);
    printf("\n");

    printf("Chaves dos elementos da árvore em Pós-ordem: ");
    travessiaPosordem(arvore->root);
    printf("\n");

    return 0;
}
