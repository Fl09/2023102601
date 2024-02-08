#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Tree* criarArvore() {
    Tree* arvore = (Tree*)malloc(sizeof(Tree));
    if (arvore) {
        arvore->root = NULL;
    }
    return arvore;
}

Node* criarNo(int dado) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo) {
        novoNo->data = dado;
        novoNo->left = NULL;
        novoNo->right = NULL;
    }
    return novoNo;
}

void inserir(Tree* arvore, int dado) {
    if (arvore == NULL) {
        return;
    }
    if (arvore->root == NULL) {
        arvore->root = criarNo(dado);
    } else {
        Node* atual = arvore->root;
        while (1) {
            if (dado < atual->data) {
                if (atual->left == NULL) {
                    atual->left = criarNo(dado);
                    break;
                } else {
                    atual = atual->left;
                }
            } else if (dado > atual->data) {
                if (atual->right == NULL) {
                    atual->right = criarNo(dado);
                    break;
                } else {
                    atual = atual->right;
                }
            } else {
                break;  // não permite duplicados
            }
        }
    }
}

void imprimirArvore(Node* no) {
    if (no == NULL) {
        return;
    }
    printf("%d ", no->data);
    imprimirArvore(no->left);
    imprimirArvore(no->right);
}

int contarElementos(Node* no) {
    if (no == NULL) {
        return 0;
    }
    return 1 + contarElementos(no->left) + contarElementos(no->right);
}

Node* buscar(Node* no, int chave) {
    if (no == NULL || no->data == chave) {
        return no;
    }
    if (chave < no->data) {
        return buscar(no->left, chave);
    }
    return buscar(no->right, chave);
}

void travessiaPreordem(Node* no) {
    if (no == NULL) {
        return;
    }
    printf("%d ", no->data);
    travessiaPreordem(no->left);
    travessiaPreordem(no->right);
}

void travessiaEmOrdem(Node* no) {
    if (no == NULL) {
        return;
    }
    travessiaEmOrdem(no->left);
    printf("%d ", no->data);
    travessiaEmOrdem(no->right);
}

void travessiaPosordem(Node* no) {
    if (no == NULL) {
        return;
    }
    travessiaPosordem(no->left);
    travessiaPosordem(no->right);
    printf("%d ", no->data);
}
